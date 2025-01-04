#include<iostream>
#include "o.h"

void processFile(FileReader& reader, const std::string& filename) {
    reader.read(filename);
}

int main()
{
    TextFileReader textReader;
    BinaryFileReader binaryReader;

    std::string textFile = "document.txt";
    std::string binaryFile = "data.bin";

    processFile(textReader, textFile);   // Calls TextFileReader::read
    processFile(binaryReader, binaryFile); // Calls BinaryFileReader::read
}