# Makefile - L'exercice 00

# L'ism dial l'executable (l-programme li ghadi ykhdem)
NAME = ClapTrap

# Les fichiers source (dial .cpp)
SRCS = ClapTrap.cpp main.cpp

# Les fichiers objet (dial .o)
OBJS = $(SRCS:.cpp=.o)

# Les flags dial compilation dial C++
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

# L'Règle dial l'compilation (melli kaddir make)
all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

# L'Règle bach t'compili kolla fichier .cpp l'fichier .o
%.o: %.cpp ClapTrap.hpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# L'Règle bach tm7i les fichiers .o w l'executable
clean:
	rm -f $(OBJS)

# L'Règle bach tm7i kolshi (l'clean w l'executable)
fclean: clean
	rm -f $(NAME)

# L'Règle bach t3awed t'compili kolshi
re: fclean all

.PHONY: all clean fclean re