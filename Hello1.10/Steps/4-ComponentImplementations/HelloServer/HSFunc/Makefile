# Generated Makefile for HSFunc

OBJS=obj/HSFunc.o 
TARGET=HSFunc.a
CC=gcc $(CPPFLAGS)
CFLAGS=-I../../../5-Integration/include -DECOA_64BIT_SUPPORT
AR=ar

default: $(TARGET)

clean:
	rm -f obj/*.o
	rm -f *.a

obj/HSFunc.o : HSFunc.c HSFunc.h HSFunc_container.h 
	$(CC) $(CFLAGS) -c $< -o $@

dirCheck:
	mkdir -p obj

$(TARGET) : dirCheck $(OBJS)
	$(AR) -cr $@ $(OBJS)
