# Generated Makefile for sysCmpModImplA1

OBJS=obj/sysCmpModImplA1.o 
TARGET=sysCmpModImplA1.a
CC=gcc $(CPPFLAGS)
CFLAGS=-I../../../5-Integration/include -DECOA_64BIT_SUPPORT
AR=ar

default: $(TARGET)

clean:
	rm -f obj/*.o
	rm -f *.a

obj/sysCmpModImplA1.o : sysCmpModImplA1.c sysCmpModImplA1.h sysCmpModImplA1_container.h 
	$(CC) $(CFLAGS) -c $< -o $@

dirCheck:
	mkdir -p obj

$(TARGET) : dirCheck $(OBJS)
	$(AR) -cr $@ $(OBJS)
