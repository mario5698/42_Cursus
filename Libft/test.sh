clear 
make 
#cc main_test.c -o main_test -L./ -lft libft.a -I./sources
cc main_test.c -o main_test -L./ libft.a -I./sources
./main_test
make fclean
rm main_test