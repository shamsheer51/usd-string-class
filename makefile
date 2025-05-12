target= main.o myfun.o mystr.o

string:${target}
	c++ ${target} -o string

main.o:main.cpp
	c++ -c main.cpp

myfun.o:myfun.cpp
	c++ -c myfun.cpp

mystr.o:mystr.cpp
	c++ -c mystr.cpp

clean:
	@echo "cleaning"
	rm -f *.o string
