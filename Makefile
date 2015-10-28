TARGET = calc
PREFIX = /usr/local/bin

.PHONY: all clean install uninstall

all: $(TARGET)

clean:
		rm -rf $(TARGET)
calc : $(TARGET).cpp 
		g++ -o $(TARGET) $(TARGET).cpp
install:
		install $(TARGET) $(PREFIX)
uninstall:
		rm -rf $(PREFIX)/$(TARGET)
