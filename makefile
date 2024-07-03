

all:
	gcc ./main.c ./color_text.c ./cursor.c ./sequences.c -o main -Wall

compile:
	gcc -c color_text.c cursor.c sequences.c -O2 -Wall
	ar rcs libtermstuff.a *.o
	rm *.o

clean:
	rm main libtermstuff.a
