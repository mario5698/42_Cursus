clear
make
cc main_test.c -o main_test -L./ -lft libftprintf.a 
./main_test
make fclean
rm main_test%
