CC = cc
BIN = fpl

SRCS = main.c
OBJS = $(patsubst %.c,%.o,$(SRCS))
CCFLAGS = -std=c89 -Wall -Wextra -pedantic -O2

.PHONY:		all run clean distclean install uninstall

all:		$(BIN)

$(BIN):		$(OBJS)
		$(CC) $(CCFLAGS) -o $(BIN) $(OBJS)

%.o:		%.c
		$(CC) $(CCFLAGS) -o $@ -c $<

clean:
		rm -f *~ $(OBJS)

distclean:	clean
		rm -f $(BIN)

install:
	cp $(BIN) /usr/local/$(BIN)

uninstall:
	-rm /usr/local/$(BIN)
