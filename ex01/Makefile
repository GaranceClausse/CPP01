_name = zombie
OBJS = main.o Zombie.o zombieHorde.o

CC = c++
CFLAGS = -Wall -Wextra -Werror
DBFLAGS = -std=c++98

all: $(_name)

debug: CFLAGS+=$(DBFLAGS)
debug:	$(_name)

$(_name): $(OBJS)
	$(CC) $^ -o $@

clean: 
	$(RM) $(OBJS)
	
fclean: clean
	$(RM) $(_name)

re: fclean all

.PHONY: all clean fclean re debug