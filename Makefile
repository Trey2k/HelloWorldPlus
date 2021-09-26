.POSIX:

include config.mk

all: options HelloWorldPlus

options:
	@echo HelloWorldPlus build options:
	@echo "CFLAGS  = $(MYCFLAGS)"
	@echo "LDFLAGS = $(MYLDFLAGS)"
	@echo "CC      = $(CC)"

HelloWorldPlus: src/main.o
	$(CC) $(MYLDFLAGS) $< -o $@

src/main.o: src/main.c
	$(CC) $(MYCFLAGS) -c $< -o $@

clean:
	rm -f src/main.o HelloWorldPlus

.PHONY: all
