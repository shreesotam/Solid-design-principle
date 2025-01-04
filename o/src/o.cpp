#include "o.h"


void TextFileReader::read(const std::string& filename)
{
    std::cout << "Reading text file: " << filename << std::endl;
}

void BinaryFileReader::read(const std::string& filename)
{
    std::cout << "Reading binary file: " << filename << std::endl;
}