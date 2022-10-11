#include <stdio.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <netdb.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

#define MAX_LINE 256

int main(int argc, char * argv[])
{
    int senderPort = atoi(argv[2]);
    int receiverPort = atoi(argv[1]);
    int packetDropProbability = atof(argv[3]);
}
