# --- Compiler and flags ---
CXX = g++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

# --- Program name ---
NAME = megaphone

# --- Source and object files ---
SRC = megaphone.cpp
OBJ = $(SRC:.cpp=.o)

# --- Default rule ---
all: $(NAME)

# --- Linking rule ---
$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

# --- Compilation rule ---
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# --- Cleaning object files ---
clean:
	rm -f $(OBJ)

# --- Cleaning everything ---
fclean: clean
	rm -f $(NAME)

# --- Rebuild everything ---
re: fclean all
