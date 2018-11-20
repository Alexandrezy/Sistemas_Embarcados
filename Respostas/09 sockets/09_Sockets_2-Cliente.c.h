#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <sys/un.h>
#include <unistd.h>

int main (int argc, char* const argv[])
{
	char *socket_name;
	char *mensagem;

	int socket_id;
	struct sockaddr name;
	int length;

	
	socket_name = argv[1];
	mensagem = 1, 2, 3, 4, 5, 6, 7, 8, 9, 10;

	fprintf(stderr, "Abrindo o socket local... ");
	socket_id = socket(PF_LOCAL, SOCK_STREAM,0);
	fprintf(stderr, "Feito!\n");

	fprintf(stderr, "Conectando o socket ao servidor no endereco local \"%s\"... ", socket_name);
	name.sa_family = AF_LOCAL;
	strcpy(name.sa_data, socket_name);
	connect(socket_id, &name, sizeof(name));
	fprintf(stderr, "Feito!\n");

	fprintf(stderr, "Mandando mensagem ao servidor... ");
	length = strlen(mensagem) + 1;
	write(socket_id, &length, sizeof(length));
	write(socket_id, mensagem, length);
	fprintf(stderr, "Feito!\n");

	fprintf(stderr, "Fechando o socket local... ");
	close(socket_id);
	fprintf(stderr, "Feito!\n");
	return 0;
}