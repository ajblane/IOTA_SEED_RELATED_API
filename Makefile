
OUT ?= ./build
SRC := ./src
TEST :=./tests

# Control the build verbosity
ifeq ("$(VERBOSE)","1")
    Q :=
    VECHO = @true
else
    Q := @
    VECHO = @$(PRINTF)
endif

TESTS = \
	converter \
	kerl \
	iss_kerl

TESTS := $(addprefix $(OUT)/test_, $(TESTS))

TESTSOBJS = \
	unity.o

TESTSOBJS := $(addprefix $(OUT)/, $(TESTSOBJS))

OBJS = \
	sign.o \
	iss_kerl.o \
	kerl.o \
	bigint.o \
	converter.o \
	KeccakHash.o \
	KeccakSpongeWidth1600.o \
	KeccakP-1600-compact64.o \
	add.o \
	trit_tryte.o

OBJS := $(addprefix $(OUT)/, $(OBJS))

all: $(TESTS)

$(OUT)/test_%: $(OUT)/test_%.o $(TESTSOBJS) $(OBJS)
	$(Q)$(CC) -o $@ $^

$(OUT)/%.o: $(TEST)/%.c
	$(Q)$(CC) -o $@ -I $(SRC) -c $<

$(OUT)/%.o: $(SRC)/%.c 
	$(Q)$(CC) -o $@ -c $<

$(OUT)/test_%.done: $(OUT)/test_%
	./$<
check: $(addsuffix .done, $(TESTS))

clean:
	rm -r $(OUT)

# Always ensure directory build exist
SHELL_HACK := $(shell mkdir -p $(OUT))
