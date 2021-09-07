######################################################################
#
# DESCRIPTION: Verilator: Small Makefile
#
# This calls the object directory makefile.  That allows the objects to
# be placed in the "current directory" which simplifies the Makefile.
#
######################################################################

TIMER_DIR:=../../..
incdir:=-I
defmacro:=-D
include ../simulation.mk

# remove space between -I and directory for verilator
INCLUDE_VERI=$(subst -I ,-I,$(INCLUDE))
VSRC_VERI=$(subst ../../../hardware/testbench/timer_tb.v,,$(VSRC))
DEFINE_VERI=$(subst -D ,-D,$(DEFINE))

######################################################################
# Check for sanity to avoid later confusion

ifneq ($(words $(CURDIR)),1)
 $(error Unsupported: GNU Make cannot build in directories containing spaces, build elsewhere: '$(CURDIR)')
endif

######################################################################
# Set up variables

# If $VERILATOR_ROOT isn't in the environment, we assume it is part of a
# package install, and verilator is in your path. Otherwise find the
# binary relative to $VERILATOR_ROOT (such as when inside the git sources).
ifeq ($(VERILATOR_ROOT),)
VERILATOR = verilator
VERILATOR_COVERAGE = verilator_coverage
else
export VERILATOR_ROOT
VERILATOR = $(VERILATOR_ROOT)/bin/verilator
VERILATOR_COVERAGE = $(VERILATOR_ROOT)/bin/verilator_coverage
endif

# Generate C++ in executable form
VERILATOR_FLAGS += -cc --exe
# Generate makefile dependencies (not shown as complicates the Makefile)
#VERILATOR_FLAGS += -MMD
# Optimize
VERILATOR_FLAGS += -Os -x-assign 0
# Warn abount lint issues; may not want this on less solid designs
VERILATOR_FLAGS += -Wall
# Disable the warning that the code has an assignment statement with a delayed time in front of it
#VERILATOR_FLAGS += -Wno-STMTDLY
#VERILATOR_FLAGS += --bbox-unsup
# Make waveforms
VERILATOR_FLAGS += --trace
# Check SystemVerilog assertions
VERILATOR_FLAGS += --assert
# Generate coverage analysis
VERILATOR_FLAGS += --coverage
# Run Verilator in debug mode
#VERILATOR_FLAGS += --debug
# Add this trace to get a backtrace in gdb
#VERILATOR_FLAGS += --gdbbt
# Use SystemVerilog 2005 with file extension .v
VERILATOR_FLAGS += +1800-2005ext+v
VERILATOR_FLAGS += $(DEFINE_VERI)

TESTBENCH_DIR = ../../testbench/
SRC_DIR = ../../src/
# Input files for Verilator
VERILATOR_INPUT = -f input.vc $(VSRC_VERI) --top-module timer.v $(TESTBENCH_DIR)sim_main.cpp

######################################################################
default: run

run:
	@echo
	@echo "-- INPUT -------------------"
	@echo "// This file typically lists flags required by a large project, e.g. include directories\n+librescan +libext+.v+.vh -y . $(INCLUDE_VERI)" > input.vc
	@echo $(VSRC_VERI)
	@echo $(INCLUDE_VERI)
	@echo
	@echo "-- VERILATE ----------------"
	$(VERILATOR) $(VERILATOR_FLAGS) $(VERILATOR_INPUT)
	@echo
	@echo "-- BUILD -------------------"
# To compile, we can either
# 1. Pass --build to Verilator by editing VERILATOR_FLAGS above.
# 2. Or, run the make rules Verilator does:
	$(MAKE) -j -C obj_dir -f Vtimer.mk
# 3. Or, call a submakefile where we can override the rules ourselves:
#	$(MAKE) -j -C obj_dir -f ../Makefile_obj
	@echo
	@echo "-- RUN ---------------------"
	@rm -rf logs
	@mkdir -p logs
	obj_dir/Vtimer +trace
	@echo
	@echo "-- COVERAGE ----------------"
	@rm -rf logs/annotated
	$(VERILATOR_COVERAGE) --annotate logs/annotated logs/coverage.dat
	@echo
	@echo "-- DONE --------------------"
	@echo "To see waveforms, open vlt_dump.vcd in a waveform viewer"
	@echo

######################################################################
# Other targets

show-config:
	$(VERILATOR) -V

maintainer-copy::
clean mostlyclean distclean maintainer-clean::
	-rm -rf obj_dir logs *.log *.dmp *.vpd coverage.dat core
