objs = lt.o
exe = lt
debugf ?= 0

ifeq ($(debugf), 1)
	opt= -g
endif


$(exe): $(objs)
	g++ -o $@ $<
lt.o: lt.cpp
	gcc -o $@ -c $(opt) $<

.PHONY : clean debug

clean :
	rm $(exe) $(objs)
debug: 
	make debugf=1
