#include <iostream>

class InputDevice {
public:
    virtual void getInput() = 0;
    virtual ~InputDevice() = default;
};

class OutputDevice {
public:
    virtual void sendOutput() = 0;
    virtual ~OutputDevice() = default;
};

class Terminal : public InputDevice, public OutputDevice {
public:
    void getInput() override;

    void sendOutput() override;
};
//Here, InputDevice and OutputDevice are separate, so Terminal only implements what it needs.

