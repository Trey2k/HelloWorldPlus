

# libs
AVAIL_NCURSES=`ldconfig -p | grep ncurses > /dev/null 2>&1 && printf "0" || printf "1"`
LIBS=`ldconfig -p | grep ncurses > /dev/null 2>&1 && printf "%s" "-lncurses" || printf ""`

MYCFLAGS=-Wall $(CFLAGS)
MYLDFLAGS=$(LIBS) $(LDFLAGS)
