#pragma once
#include <iostream>
#include <string>

class FileReader {
public:
    virtual void read(const std::string& filename) = 0;
    virtual ~FileReader() = default;
};

class TextFileReader : public FileReader {
public:
    virtual ~TextFileReader() = default;
    void read(const std::string& filename) override;
};

class BinaryFileReader : public FileReader {
public:
    virtual ~BinaryFileReader() = default;
    void read(const std::string& filename) override;
};

//To add new file types, extend FileReader without modifying existing code.