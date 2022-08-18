
#include<iostream>
#include<sys/socket.h>
#include<sys/type.h>
#include<unistd.h>
#include<netdb.h>
#include<arpa/inet.h>
using namespace std;
int main(){
  int sSocket=socket(AF_INET, SOCK_STREAM, 0);
  if(sSocket<0){
    cout<<"socket wasn't created"<<endl;
    return -1;
  }
  else{
    cout<<"socket created successfully"<<endl;
  }
  return 0;
}
