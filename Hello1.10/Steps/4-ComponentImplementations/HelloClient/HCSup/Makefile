# Generated Makefile for HCSup

OBJS=obj/HCSup.o 
TARGET=HCSup.a
CC=gcc $(CPPFLAGS)
CFLAGS=-I../../../5-Integration/include -DECOA_64BIT_SUPPORT
AR=ar

default: $(TARGET)

clean:
	rm -f obj/*.o
	rm -f *.a

obj/HCSup.o : HCSup.c HCSup.h HCSup_container.h 
	$(CC) $(CFLAGS) -c $< -o $@

dirCheck:
	mkdir -p obj

$(TARGET) : dirCheck $(OBJS)
	$(AR) -cr $@ $(OBJS)
