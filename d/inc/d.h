#pragma once
#include <iostream>
#include <memory>

class Notification {
public:
    virtual void send(const std::string& message) = 0;
    virtual ~Notification() = default;
};

class EmailNotification : public Notification {
public:
    void send(const std::string& message) override ;
};

class SMSNotification : public Notification {
public:
    void send(const std::string& message) override;
};

class NotificationService {
private:
    std::unique_ptr<Notification> notifier;
public:
    NotificationService(std::unique_ptr<Notification> notification);

    void notify(const std::string& message);
};
//Switching between EmailNotification and SMSNotification does not affect NotificationService.