rm -f *.o libft.a
cc -Wall -Wextra -Werror -c *.c 
ar -crs libft.a *.o
find . -type f -name "*.o" -delete