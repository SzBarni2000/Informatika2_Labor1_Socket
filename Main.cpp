#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <winsock2.h>

int main(int argc, char* argv[])
{
	// Ellen?rz�s
	if (argc < 5)
	{
		printf("Haszn�lat: %s IP port oldal f�jl\n", argv[0]);
		return 1;
	}

	// Winsock inicializ�l�s
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

