CXX=g++
CXXFLAGS=-Wall -MMD

SRCS=$(shell find . -type f -name "*.cpp" -printf "%P\n")
FILES=$(shell find . -type f -name "*.cpp" -printf "%f\n")
HDRS=$(wildcard *.hpp)
OBJS=$(FILES:%.cpp=objs/%.o)

all: $(OBJS)
	@echo "Building..."
	@$(CXX) $(OBJS) -o pli

objs/%.o: $(SRCS)
	@echo "Compiling $@ from $<"
	@$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	@$(RM) objs/* pli