
CC ?= gcc
CFLAGS += -std=c99 -Wall -Wextra -Ideps
DEPS := $(wildcard deps/*/*.c)
OBJS := finitediff_central.o $(DEPS:.c=.o)

.DEFAULT_GOAL := validate

test: test.o $(OBJS)

finitediff_central.o: finitediff_central.c finitediff_central.h

deps: package.json
	clib install --dev
	@touch $@

validate: test
	./$<

clean:
	rm -f $(OBJS) finitediff_central.o test.o test

.PHONY: validate clean