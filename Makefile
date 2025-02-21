SRCS =	srcs/arr_utils.c		\
		srcs/chunck_sort.c 		\
		srcs/ft_exit.c			\
		srcs/ft_init.c			\
		srcs/main.c 			\
		srcs/my_sort.c			\
		srcs/push.c 			\
		srcs/rotate.c 			\
		srcs/selection_sort.c	\
		srcs/utils.c			\

BSRCS =	bonus/ft_exit_bonus.c				\
		bonus/ft_init_bonus.c				\
		bonus/get_next_line_utils_bonus.c	\
		bonus/get_next_line_bonus.c			\
		bonus/main_bonus.c					\
		bonus/push_rotate_bonus.c			\
		bonus/rev_rotate_bonus.c			\
		bonus/swap_bonus.c					\
		bonus/utils_bonus.c					\
		bonus/utils2_bonus.c				\

OBG = $(SRCS:.c=.o)
BOBG = $(BSRCS:.c=.o)

NAME = push_swap
BNAME = checker

FLAGS = -Wall -Wextra -Werror
I = -I ./includes/

all : $(NAME)
bonus : $(BNAME)

$(NAME) : $(OBG)
	cc $(OBG) -o $@
$(BNAME) : $(BOBG)
	cc $(BOBG) -o $@

$(OBG) : %.o : %.c
	cc -c $(FLAGS) $(I) $^ -o $@
$(BOBG) : %.o : %.c
	cc -c $(FLAGS) $(I) $^ -o $@

clean:
	rm -f $(OBG) $(BOBG)

fclean : clean
	rm -f $(NAME) $(BNAME)

re : fclean all
bre : fclean bonus

.PHONY : clean bclean
