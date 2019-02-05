CFLAGS  = -Wall -Wextra -std=c99 -O0 -g

TARGET = main
SRCS   = fp-assignment.c test_program.c
OBJS   = $(SRCS:.c=.o)
DEPS   = $(SRCS:%.c=.%.d)

.PHONY: clean all
all: $(TARGET)

run: $(TARGET)
	./$(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(TARGET)

%.o: %.c
	$(CC) -MMD -MP -MF .$*.d $(CFLAGS) -c $*.c -o $*.o

clean:
	$(RM) $(TARGET) $(OBJS) $(DEPS)

-include $(DEPS)
