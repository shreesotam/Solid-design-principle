#include "d.h"

void EmailNotification::send(const std::string& message)
{
    std::cout << "Sending Email: " << message << std::endl;
}

void SMSNotification::send(const std::string& message)
{
    std::cout << "Sending SMS: " << message << std::endl;
}

NotificationService::NotificationService(std::unique_ptr<Notification> notification) : notifier(std::move(notification))
{

}

void NotificationService::notify(const std::string &message)
{
    notifier->send(message);
}
