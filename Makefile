run: deps apka
	./apka

apka: hello.o main.o Wektor.o Zespolona.o
	g++ -o apka $^

%.o: %.cpp
	g++ -c $^

clean:
	rm -f *.o apka *.gch Makefile.deps

deps: *.cpp
	g++ -MM *.cpp > Makefile.deps

.PHONY: clean run

-include Makefile.deps
