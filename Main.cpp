#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <winsock2.h>

int main(int argc, char* argv[])
{
	// Ellen?rzés
	if (argc < 5)
	{
		printf("Használat: %s IP port oldal fájl\n", argv[0]);
		return 1;
	}

	// Winsock inicializálás
	WSADATA	wsd;
	if (WSAStartup(0x0202, &wsd) != 0)
	{
		perror("WSAStartup");
		return 1;
	}

	// TODO

	WSACleanup();

	return 0;
}

