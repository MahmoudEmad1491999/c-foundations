CC = gcc
CFLAGS = -Wall -Wextra -Werror -fsanitize=address,undefined -g 
SRCS = main.c strutil.c
OBJS = $(SRCS:.c=.o)
TARGET = run
all : $(TARGET)

$(TARGET) : $(OBJS)
	$(CC) $(CFLAGS) $^ -o $@

%.o : %.c
	$(CC) $(CFLAGS) $< -c -o $@

clean:
	rm -rvf $(TARGET) $(OBJS)
.PHONY: all clean
