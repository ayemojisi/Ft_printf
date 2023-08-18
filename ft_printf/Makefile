NAME		=	libftprintf.a

LIBFT_DIT	=	./libft
LIBFT		=	./libft/libft.a

SRCS=ft_printf.c ft_printf_utils.c
OBJS=$(SRCS:.c=.o)


CC=gcc
CFLAGS=-Wall -Wextra -Werror


all: $(NAME)

$(NAME): $(OBJS)
	@cd $(LIBFT_DIT) && $(MAKE)
	cp libft/libft.a $(NAME)
	ar -rcs $(NAME) $(OBJS) $(LIBFT)

clean:
	rm -f $(OBJS)
	@cd $(LIBFT_DIT) && $(MAKE) clean
fclean: clean
	rm -rf $(NAME)
	@cd $(LIBFT_DIT) && $(MAKE) fclean
	@echo "                                                     |     |"
	@echo "                                                     \/=T=\/"
	@echo "                                                      \_H_/"
	@echo "                                                     \/=O=\/"
	@echo "                                                      [=R=]"
	@echo "						    __\___/_____"
	@echo "	                                           /..[  _____  ]"
	@echo " 						  /_  [ [  S /] ]"
	@echo "                                                 /../.[ [ E / ] ]"
	@echo "			 			<..>[_[ [R / /] ]"
	@echo "                                               /../ [.[ [ / / ] ]"
	@echo "	    ___S_E_R_K_A_N_________________]\ /__/  [_[ [/ / K] ]"
	@echo "   	   <_______E_R_G_U_N_______________>>0---]  [=\ \ / A / /"
	@echo "                                           ]/       /__\ \ N / /"
	@echo "                                                   /....\ \_/ /"
	@echo "  ▄▄▄▄▄▄▄ ▄▄▄▄▄▄   ▄▄▄ ▄▄    ▄ ▄▄▄▄▄▄▄ ▄▄▄▄▄▄▄     [___/=\___/"
	@echo " █    ▄  █   ▄  █ █   █  █  █ █       █       █	   [...] [...]"
	@echo " █   █ █ █  █ █ █ █   █   █▄█ █▄     ▄█   ▄▄▄▄█	   [___/ \___]"
	@echo " █   █▄█ █  █▄▄█  █   █       █ █   █ █   █▄▄▄▄    <...> <...>"
	@echo " █    ▄▄▄█  ▄▄  █ █   █  ▄    █ █   █ █    ▄▄▄█    [..]   [..]"
	@echo " █   █   █ █  █  ██   █ █ █   █ █   █ █   █       _[__]   [__]_"
	@echo " █▄▄▄█   █▄█  █▄▄██▄▄▄█▄█  █▄▄█ █▄▄▄█ █▄▄▄█      [____>   <____]"

re: fclean all
.PHONY: all clean fclean re