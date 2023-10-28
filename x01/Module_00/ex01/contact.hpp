#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <string>
#include <cstring>
#include <iomanip>


class Contact
{
private:
    std::string _first_name;
    std::string _last_name;
    std::string _nickname;
    std::string _darkest_secret;
    std::string _phone_number;

    std::string _parse_str(std::string val, std::string type);
    std::string _parse_digit(std::string val);

public:
    Contact();
    ~Contact();

    std::string get_first_name() const;
    std::string get_last_name() const;
    std::string get_nickname() const;
    std::string get_darkest_secret() const;
    std::string get_phone_number() const;

    void        set_darkest_secret(std::string darkest_secret);
    std::string set_first_name(std::string first_name);
    std::string set_last_name(std::string last_name);
    std::string set_nickname(std::string nickname);
    std::string set_phone_number(std::string phone_number);
};

#endif