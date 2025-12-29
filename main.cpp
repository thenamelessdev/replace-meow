#include <iostream>
#include <fstream>

int main(int argc, char* argv[]){

    if(argc != 2){
        std::cout << "Please enter one argument" << std::endl;
        return 1;
    }

    std::string fileName = argv[1];
    
    std::ofstream file(fileName, std::ios::trunc);
    file << "meow";
    file.close();

    return 0;
}