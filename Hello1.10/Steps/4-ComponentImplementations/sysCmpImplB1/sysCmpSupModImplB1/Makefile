# Generated Makefile for sysCmpSupModImplB1

OBJS=obj/sysCmpSupModImplB1.o 
TARGET=sysCmpSupModImplB1.a
CC=gcc $(CPPFLAGS)
CFLAGS=-I../../../5-Integration/include -DECOA_64BIT_SUPPORT
AR=ar

default: $(TARGET)

clean:
	rm -f obj/*.o
	rm -f *.a

obj/sysCmpSupModImplB1.o : sysCmpSupModImplB1.c sysCmpSupModImplB1.h sysCmpSupModImplB1_container.h 
	$(CC) $(CFLAGS) -c $< -o $@

dirCheck:
	mkdir -p obj

$(TARGET) : dirCheck $(OBJS)
	$(AR) -cr $@ $(OBJS)
