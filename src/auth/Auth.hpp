#pragma once

#include <string>

class Auth {
    
    protected:
    std::string password;

    public:
    Auth(std::string password);
    virtual bool authentication(std::string password) const = 0;
    std::string get_password() const;
    
};