


Fonctionnement sans Makefile :

        gcc main.c hello.c  &&  ./a.out

Créer puis utiliser la librarie:

        gcc -c fct_lib.c 
        && ar rc libft.a fct_lib.o
        && ranlib libft.a
        