.PHONY = debug retest re

CFLAGS = -fdiagnostics-color=always -Iinclude/dragon/

## PATHS

PATH_SYS = $(strip src/system/)


PATH_DRG = $(strip src/dragon/)


PATH_EPI = $(strip src/epitech_tools/)

PATH_EPI_STR = $(strip $(PATH_EPI)/string/)

## SOURCES

#SRC_SYS = $(PATH_SYS)sys.c\

# dragon
SRC_DRG = \

# epitech tools
SRC_EPI_STR = $(PATH_EPI_STR)dg_strlen.c	\

SRC_EPI = $(SRC_EPI_STR)	\


SRC =	$(SRC_EPI)	\
		$(SRC_DRG)	\
		#$(SRC_SYS)	\

## CONFIG

EPITECH := $(filter EPITECH=true,$(shell tr -d ' ' < config))
ifneq ($(words $(CONFIG)),0)
CFLAGS+= -DEPITECH
EPITECH = true
else
EPITECH = false
endif

DEBUG := $(filter DEBUG=true,$(shell tr -d ' ' < config))
ifneq ($(words $(CONFIG)),0)
CFLAGS+= -DDEBUG
DEBUG = true
else
DEBUG = false
endif

CSFML := $(filter GRAPHICS=CSFML,$(shell tr -d ' ' < config))
ifneq ($(words $(CONFIG)),0)
CFLAGS+= -DCSFML -lcsfml-graphics -lcsfml-system -lcsfml-window
CSFML = true
else
CSFML = false
endif

## OTHER

OBJ =   $(SRC:.c=.o)

NAME =  lidragon2.a

TEST = libdragon2.t

all: $(NAME)

$(NAME): $(OBJ) 
	@echo ' ___  ___  ___                         _  _                                              ___  ___  ___'
	@echo '|___||___||___|  ___  ___  _ _ _  ___ <_>| | ___   ___  _ _  ___  ___  _ _  ___  _ _ _  |___||___||___|'
	@echo ' ___  ___  ___  / |  / . \|     || . \| || |/ ._> | . \|  _>/ . \/ . ||  _><_> ||     |  ___  ___  ___'
	@echo '|___||___||___| \_|_.\___/|_|_|_||  _/|_||_|\___. |  _/|_|  \___/\_. ||_|  <___||_|_|_| |___||___||___|'
	@echo '                                 |_|              |_|            <___|'
	ar rc -o $(NAME) $(OBJ) $(CFLAGS)

debug:  $(OBJ) 
	ar rc -g3 -o $(NAME) $(OBJ) $(CFLAGS)

tests_run:  
	gcc -o $(TEST) $(OBJ) $(CFLAGS)
	./$(TEST)

retest: fclean tests_run

clean:
	@echo ' ___  ___  ___        _                  ___  ___  ___'
	@echo '|___||___||___|  ___ | | ___  ___  _ _  |___||___||___|'
	@echo ' ___  ___  ___  / |  | |/ ._><_> ||   |  ___  ___  ___'
	@echo '|___||___||___| \_|_.|_|\___.<___||_|_| |___||___||___|'
	rm -f $(OBJ)

fclean: clean
	@echo ' ___  ___  ___   ___      _                  ___  ___  ___'
	@echo '|___||___||___| | |  ___ | | ___  ___  _ _  |___||___||___|'
	@echo ' ___  ___  ___  | |-/ |  | |/ ._><_> ||   |  ___  ___  ___'
	@echo '|___||___||___| |_| \_|_.|_|\___.<___||_|_| |___||___||___|'
	rm -f $(NAME) $(TEST)

re: fclean all