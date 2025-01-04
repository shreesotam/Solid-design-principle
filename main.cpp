#include<iostream>
#include "o.h"
#include "l.h"
#include "d.h"

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
   //Keyboard keyboard;
   //Mouse mouse;
   //useDevice(keyboard);
   //useDevice(mouse);

   // Use EmailNotification
    auto emailNotifier = std::make_unique<EmailNotification>();
    NotificationService emailService(std::move(emailNotifier));
    emailService.notify("Hello via Email!");

    // Use SMSNotification
    auto smsNotifier = std::make_unique<SMSNotification>();
    NotificationService smsService(std::move(smsNotifier));
    smsService.notify("Hello via SMS!");

    return 0;




}