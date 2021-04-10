


But du Makefile :

        créer une librarie dans laqeulle on met la fonction hello.c
        puis pouvoir appeler cette fonction dans le main.c


        compilation en .o du fichier hello.c :

                -> gcc -c hello.c  -I includes
        
        création de la librairie grace au .o :

                -> ar rc libh.a hello.o

        Lancer le main :

                -> gcc main.c -I includes libh.a

