clear
make
cc main_test.c -o main_test -L. libftprintf.a 
./main_test
make fclean

