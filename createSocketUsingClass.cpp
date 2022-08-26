#ifdef linux
#define platform_name "Linux"
#include<iostream>
#include<bits/stdc++.h>
#include<sys/socket.h>
#include<sys/types.h>
#include<unistd.h>
#include<error>
#include<netdb.h>
#include<arpa/inet.h>
#include "../linuxPlatform.h"
using namespace std;
#endif


#ifdef linux
class linuxPlatform {
public:
	int sockfd = socket(AF_INET, SOCK_STREAM, 0);

	int createSocket() {
		if (sockfd < 0) {
			std::cerr << "socket creation failed......" << strerror(errno) << std::endl;
		}
		else {
			std::cout << "socket created successfully....." << std::endl;
		}
		return sockfd;
	}
};


class bindPoint: public linuxPlatform{
	struct sockaddr_in serverAddr;
	int binding;
	serverAddr.sin_family = AF_INET;
	serverAddr.sin_port = htons(port);
	serverAddr.sin_addr.s_addr = htonl(INADDR_ANY);
	int bindStatus = bind(serverSocket, (struct sockaddr*)&serverAddr, sizeof(serverAddr));
	int bindSocketStatus() {
		if (bindstatud < 0) {
			std::cerr << "socket binding has failed" << strerror(errno);
			return 0;
		}
	}


};

#endif // linux



