#include "vision.hpp"

int main(){
    Vision* udpClient = new Vision(0);
    udpClient->initSocket();    

    return 0;
}