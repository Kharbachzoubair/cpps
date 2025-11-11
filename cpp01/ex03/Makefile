# --- Configuration Variables ---

# Name of the final executable file
NAME = ex03 

# Compiler and Flags
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -g

# Source files (.cpp files required for Exercise 03)
SRCS = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp

# Automatically generate object file names
OBJS = $(SRCS:.cpp=.o)

# --- Rules ---

# Default target: Builds the project
all: $(NAME)

# Linker rule: Creates the final executable
$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

# Compilation rule: Creates object files
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean rule: Removes all object files
clean:
	rm -f $(OBJS)

# Fclean rule: Removes the executable and all object files
fclean: clean
	rm -f $(NAME)

# Re-build rule: Removes all, then builds the project again
re: fclean all

# Phony targets: Tell Make that these are not actual files
.PHONY: all clean fclean re