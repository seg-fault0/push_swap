SRCS =	srcs/arr_utils.c		\
		srcs/chunck_sort.c 		\
		srcs/ft_exit.c			\
		srcs/ft_init.c			\
		srcs/main.c 			\
		srcs/push.c 			\
		srcs/rotate.c 			\
		srcs/selection_sort.c	\
		srcs/utils.c			\

OBG = $(SRCS:.c=.o)
NAME = push_swap
FLAGS = -Wall -Wextra -Werror
I = -I ./includes/

all : $(NAME)

$(NAME) : $(OBG)
	cc $(OBG) -o $@

%.o : %.c
	cc -c $(FLAGS) $(I) $^ -o $@

clean:
	rm -f $(OBG)

fclean : clean
	rm -f $(NAME)

bonus:
	cc bonus/*.c -I . -o checker

.PHONY : bonus