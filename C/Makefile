
object-files = src/main.o

.PHONY: all clean

all: sorting

.c.o:
	$(CC) $(CFLAGS) -c -o $@ $<

sorting: $(object-files)
	$(CC) $(LDFLAGS) -o $@ $(object-files)

clean:
	$(RM) $(object-files) sorting

