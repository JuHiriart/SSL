CC = gcc

CFLAGS = -Wall -Wextra -std=c99

all: TablasDeConversion
all: ConversionTest

Conversion.o: Conversion.c Conversion.h
	$(CC) $(CFLAGS) -c Conversion.c

ConversionTest.o: ConversionTest.c Conversion.h
	$(CC) $(CFLAGS) -c ConversionTest.c

TablasDeConversion.o: TablasDeConversion.c Conversion.h
	$(CC) $(CFLAGS) -c TablasDeConversion.c

TablasDeConversion: Conversion.o TablasDeConversion.o
	$(CC) $(CFLAGS) Conversion.o TablasDeConversion.o -o TablasDeConversion

ConversionTest: Conversion.o ConversionTest.o
	$(CC) $(CFLAGS) Conversion.o ConversionTest.o -o ConversionTest	

clean:
	rm -f *.o TablasDeConversion
	rm -f *.o ConversionTest