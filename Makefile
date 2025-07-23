CC = gcc
CFLAGS = -Wall

TARGET = convert
OBJECTS = main.o convertlower.o converthexadecimal.o convertdecimal.o

$(TARGET): $(OBJECTS)
		$(CC) $(CFLAGS) -o $@ $(OBJECTS)

main.o: main.c convertlower.h converthexadecimal.h convertdecimal.h
		$(CC) $(CFLAGS) -c main.c

convertlower.o: convertlower.c convertlower.h
		$(CC) $(CFLAGS) -c convertlower.c

converthexadecimal.o: converthexadecimal.c converthexadecimal.h
		$(CC) $(CFLAGS) -c converthexadecimal.c

convertdecimal.o: convertdecimal.c convertdecimal.h
		$(CC) $(CFLAGS) -c convertdecimal.c

clean:
		rm -f $(OBJECTS) $(TARGET)
