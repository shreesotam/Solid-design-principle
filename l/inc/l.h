#pragma once
#include <iostream>
#include <string>

class Device {
public:
    virtual void operate() = 0;
    virtual ~Device() = default;
};

class Keyboard : public Device {
public:
    void operate() override;
};

class Mouse : public Device {
public:
    void operate() override;
};

//Both Keyboard and Mouse can replace the base Device without breaking functionality.
