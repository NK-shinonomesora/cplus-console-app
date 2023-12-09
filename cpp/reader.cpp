#include "../header/reader.hpp"
#include <iostream>
#include <fstream>

void Reader::read(string path) {
    std::ifstream inputFile(path);
    if (inputFile.is_open()) {
        std::string line;
        while (std::getline(inputFile, line)) {
            std::cout << line << std::endl;
        }
        inputFile.close();
    } else {
        std::cerr << "Error opening file: " << path << std::endl;
    }
}