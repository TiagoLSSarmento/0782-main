############################# Makefile ##########################
CC=gcc
CFLAGS=-Wall #-g

######Alterar Dependências e Objetos #####
DEPS = lista.h#ficheiros .h - Colocar todos
OBJ = main.o lista.o#objetos. Um por ficheiro .c sempre com terminação .o
##########################################

%.o: %.c $(DEPS)
	$(CC) $(CFLAGS) -c -o $@ $<

#Mudar o nome de app para o nome da aplicação pretendido
listaApp: $(OBJ)
	gcc $(CFLAGS) -o $@ $^

clean:
	rm -rf *.o
	rm -rf listaApp
