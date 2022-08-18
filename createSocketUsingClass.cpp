
#include<iostream>
#include<sys/type.h>
#include<sys/socket.h>
#include<unistd.h>
#include<netdb.h>
#include<arpa/inet.h>
using namespace std;

class createSocket{
  public:
  int sSocket;
  int serverSocket(){
  if(sSocket<0){
  cout<<"socket can't be created"<<endl;
    return -1;
  }
    else{
    cout<<"socket created succesfully"<<endl;
    }
    return sSocket;
  }
};
int main(){
createSocket cSock;
  cSock.sSocket=socket(AF_INET, SOCK_STREAM, 0);
  cSock.serverSocket();
  return 0;
}
o/p: socket created successfully.
