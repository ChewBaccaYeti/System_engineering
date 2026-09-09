.DEFAULT_GOAL := compile_C

.PHONY: all cleanup

CC := g++
# To prevent infinite loop, use := operator
CC := ${CC}

all: say_hello compile_C generate_include generate_src generate_stages

say_hello:
		@echo "Hello, World."

compile_C: hello-world.cpp
		@echo "Compiling..."
		${CC} hello-world.cpp -o hello-world

generate_include:
		@echo "Creating errno-wrappers, logs..."
		mkdir include && cd include && touch util.h procinfo.h supervisor.h signals.h sched_ctl.h priv.h

generate_src:
		@echo "Creating source..."
		mkdir src && cd src && touch main.c util.c procinfo.c supervisor.c signals.c sched_ctl.c priv.c

generate_stages:
		@echo "Creating stand-alone demo programs"
		mkdir stages && cd stages && touch s0_addrmap.c s1_fork.c s2_states.c s5_sched.c s6_priv.c

# exclude from all:
cleanup:
		@echo "Cleaning text files..."
		rm *.txt
