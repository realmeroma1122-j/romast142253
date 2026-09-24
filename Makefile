CXX = g++
CXXFLAGS = -Wall -Wextra -O2

ifeq ($(OS),Windows_NT)
	LIB_NAME = sort_lib.dll
	EXEC_NAME = main.exe
	CLEAN_CMD = del $(LIB_NAME) $(EXEC_NAME)
	LIB_FLAG = -shared
else
	LIB_NAME = libsort_lib.so
	EXEC_NAME = main
	CLEAN_CMD = rm -f $(LIB_NAME) $(EXEC_NAME)
	LIB_FLAG = -shared -fPIC
endif

all: $(LIB_NAME) $(EXEC_NAME)

$(LIB_NAME): sorting_lib.cpp sorting_lib.h
	$(CXX) $(CXXFLAGS) $(LIB_FLAG) -o $(LIB_NAME) sorting_lib.cpp

$(EXEC_NAME): main.cpp $(LIB_NAME)
	$(CXX) $(CXXFLAGS) -o $(EXEC_NAME) main.cpp $(LIB_NAME)

clean:
	$(CLEAN_CMD)
