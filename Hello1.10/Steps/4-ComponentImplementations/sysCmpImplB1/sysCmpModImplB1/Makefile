# Generated Makefile for sysCmpModImplB1

OBJS=obj/sysCmpModImplB1.o 
TARGET=sysCmpModImplB1.a
CC=gcc $(CPPFLAGS)
CFLAGS=-I../../../5-Integration/include -DECOA_64BIT_SUPPORT
AR=ar

default: $(TARGET)

clean:
	rm -f obj/*.o
	rm -f *.a

obj/sysCmpModImplB1.o : sysCmpModImplB1.c sysCmpModImplB1.h sysCmpModImplB1_container.h 
	$(CC) $(CFLAGS) -c $< -o $@

dirCheck:
	mkdir -p obj

$(TARGET) : dirCheck $(OBJS)
	$(AR) -cr $@ $(OBJS)
