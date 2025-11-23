# L'EXERCICE 01: SCAVTRAP INHERITANCE AND OCF

NAME = ScavTrap

# Kolla les fichiers sources lli khass ykouno f'l'turn-in
SRCS = ClapTrap.cpp ScavTrap.cpp main.cpp

# Les fichiers objet
OBJS = $(SRCS:.cpp=.o)

# Les flags dial compilation
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

# L'Règle dial l'compilation
all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

# L'Règle bach t'compili kolla fichier .cpp l'fichier .o
# ClapTrap.hpp hiya l'dependance dial kolshi
%.o: %.cpp ClapTrap.hpp ScavTrap.hpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# L'Règle bach tm7i les fichiers .o
clean:
	rm -f $(OBJS)

# L'Règle bach tm7i kolshi (l'clean w l'executable)
fclean: clean
	rm -f $(NAME)

# L'Règle bach t3awed t'compili kolshi
re: fclean all

.PHONY: all clean fclean re