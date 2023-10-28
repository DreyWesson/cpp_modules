#include "contact.hpp"

Contact::Contact()
{
}

Contact::~Contact()
{
}

std::string Contact::get_first_name() const
{
    return (this->_first_name);
}

std::string Contact::get_last_name() const
{
    return (this->_last_name);
}

std::string Contact::get_nickname() const
{
    return (this->_nickname);
}

std::string Contact::get_phone_number() const
{
    return (this->_phone_number);
}

std::string Contact::get_darkest_secret() const
{
    return (this->_darkest_secret);
}

std::string Contact::_parse_str(std::string val, std::string type)
{
    if (val == "")
        return ("");
    if (!type.compare("str"))
    {
        for (size_t i = 0; i < val.size(); i++)
            if (!isalpha(val[i]))
            {
                if (isspace(val[i]))
                    continue;
                else
                    return ("");
            }
    }
    if (val.length() > 10)
    {
        val[9] = '.';
        val.erase(10, val.length() - 10);
    }
    return (val);
}

std::string Contact::_parse_digit(std::string val)
{
    if (val == "")
        return ("");

    for (size_t i = 0; i < val.size(); i++)
        if (!isdigit(val[i]))
            return ("");
    if (val.length() > 10)
    {
        val[9] = '.';
        val.erase(10, val.length() - 10);
    }
    return (val);
}

std::string Contact::set_first_name(std::string first_name)
{
    this->_first_name = this->_parse_str(first_name, "str");
    return (this->_first_name);
}

std::string Contact::set_last_name(std::string last_name)
{
    this->_last_name = this->_parse_str(last_name, "str");
    return (this->_last_name);
}

std::string Contact::set_nickname(std::string nickname)
{
    this->_nickname = this->_parse_str(nickname, "str");
    return (this->_nickname);
}

std::string Contact::set_phone_number(std::string phone_number)
{
    this->_phone_number = this->_parse_digit(phone_number);
    return (this->_phone_number);
}

void Contact::set_darkest_secret(std::string darkest_secret)
{
    this->_darkest_secret = this->_parse_str(darkest_secret, "mix");
}
