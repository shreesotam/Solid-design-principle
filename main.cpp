#include<iostream>
#include "o.h"
#include "l.h"

void processFile(FileReader& reader, const std::string& filename) {
    reader.read(filename);
}

void useDevice(Device& device) {
    device.operate();
}

int main()
{
    /*
    TextFileReader textReader;
    BinaryFileReader binaryReader;

    std::string textFile = "document.txt";
    std::string binaryFile = "data.bin";

    processFile(textReader, textFile);   // Calls TextFileReader::read
    processFile(binaryReader, binaryFile); // Calls BinaryFileReader::read
    */
   Keyboard keyboard;
   Mouse mouse;
   useDevice(keyboard);
   useDevice(mouse);



}