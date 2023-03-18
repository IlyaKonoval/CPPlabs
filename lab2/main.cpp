#include <iostream>
#include <fstream>
#include "Service.cpp"
using namespace std;

int main(int argc, char *argv[]){
    if (argc == 0){
        (new Service())->run();
    }
    else if (argc == 1){
        std::string filename = argv[0];
        (new Service(filename))->run();
    }
    return 0;
}
