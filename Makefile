main: main.o caesar.o vigenere.o decrypt.o
	g++ -o main main.o caesar.o vigenere.o decrypt.o

test-ascii: test-ascii-main.o test-ascii.o
	g++ -o test-ascii test-ascii-main.o test-ascii.o

tests: tests.o funcs.o
	g++ -o tests tests.o funcs.o

test-ascii.o: test-ascii.cpp test-ascii.h

test-ascii-main.o: test-ascii-main.cpp test-ascii.h

caesar.o: caesar.cpp caesar.h

vigenere.o: vigenere.cpp vigenere.h

decrypt.o: decrypt.cpp decrypt.h

main.o: main.cpp caesar.h

tests.o: tests.cpp doctest.h caesar.h

clean:
	rm -f main.o caesar.o tests.o test-ascii-main.o test-ascii.o vigenere.o decrypt.o

