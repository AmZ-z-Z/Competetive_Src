#Makefile v0.1
CFLAGS=-Wall -g
#-wall for providing Warnings
C=gcc
#this is comment in makefile syntax
#this clean is considered as Command
#at makefile first command applied without any alias 
#take in consideration the "Tab" after Command "as Clean"
#its your Responsiblity to choose the proper Compiler flags
Compile:	two_Sum.o	Pointer_ex.o	HelloWolrd.0
	$(C)	$(CFLAGS)	two_Sum.o	HelloWolrd.o	two_Sum.o -o final 
clean:
	rm -rf *o 
two_sum.o:	two_Sum.c
	$(C)	$(CFLAGS) two_Sum.c
Pointer_ex.o:	Pointer_ex.c
	$(C)	$(CFLAGS)	Pointer_ex.c
HelloWolrd.o:	HelloWolrd.c
	$(C)	$(CFLAGS)	HelloWolrd.c
clean_build:
	rm	-rf	*out
#after command name <dependecy variable>
#small explaintion is that  "clean" >> Target,"two_sum.c"is called dependcy variable
#while the next line is "Command line "
#target is varaible which called by kernel