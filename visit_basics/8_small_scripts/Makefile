CXX = g++
CXXFLAGS = -Wall -std=c++17

# Get all cpp files in the directory
SOURCES = $(wildcard *.cpp)
# Create corresponding executable names (without .cpp extension)
EXECUTABLES = $(SOURCES:.cpp=)

# Default target builds all executables
all: $(EXECUTABLES)

# Pattern rule to build any executable from its cpp file
%: %.cpp
	$(CXX) $(CXXFLAGS) $< -o $@

# Clean all executables
clean:
	rm -f $(EXECUTABLES)

# Helper to list all available programs
list:
	@echo "Available programs:"
	@echo $(EXECUTABLES) | tr ' ' '\n'

# Run a single program
run-%: %
	./$<

# Run all programs
run-all: $(EXECUTABLES)
	@for exe in $(EXECUTABLES); do \
		echo "\n=== Running $$exe ==="; \
		./$$exe; \
	done

.PHONY: all clean list run-all