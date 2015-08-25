# Generated Makefile for sysCmpSupModImplA1

OBJS=obj/sysCmpSupModImplA1.o 
TARGET=sysCmpSupModImplA1.a
CC=gcc $(CPPFLAGS)
CFLAGS=-I../../../5-Integration/include -DECOA_64BIT_SUPPORT
AR=ar

default: $(TARGET)

clean:
	rm -f obj/*.o
	rm -f *.a

obj/sysCmpSupModImplA1.o : sysCmpSupModImplA1.c sysCmpSupModImplA1.h sysCmpSupModImplA1_container.h 
	$(CC) $(CFLAGS) -c $< -o $@

dirCheck:
	mkdir -p obj

$(TARGET) : dirCheck $(OBJS)
	$(AR) -cr $@ $(OBJS)
