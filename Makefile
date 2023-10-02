# Makefile for WaterSortPuzzle

CXX = g++
SRC = main.cpp
TARGET = water_sort

all: $(TARGET)

$(TARGET): $(SRC)
	$(CXX) -o $(TARGET) $(SRC)

clean:
	rm -f $(TARGET)
