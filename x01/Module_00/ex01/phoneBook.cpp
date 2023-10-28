#include "phoneBook.hpp"

Phonebook::Phonebook()
{
    this->_index = 0;
}

Phonebook::~Phonebook()
{
    std::cout << "Phonebook destructor called!" << std::endl;
}

void Phonebook::add_contact()
{
    int flag = 0;
    std::string first_name = "";
    std::string last_name = "";
    std::string nickname = "";
    std::string darkest_secret = "";
    std::string phone_number = "";

    while (std::cin.good() && (first_name.empty() || flag == 1))
    {
        flag = 0;
        std::cout << "First name> ";
        getline(std::cin, first_name);
        if (first_name.empty())
            std::cout << "INVALID INPUT: please enter non empty name!!" << std::endl;
        if (_contacts[_index % 8].set_first_name(first_name) == "")
        {
            std::cout << "INVALID INPUT: please enter a valid name!!" << std::endl;
            flag = 1;
        }
    }

    while (std::cin.good() && (last_name.empty() || flag == 1))
    {
        flag = 0;
        std::cout << "Last name> " ;
        getline(std::cin, last_name);
        if (last_name.empty())
            std::cout << "INVALID INPUT: please enter non empty name!!" << std::endl;
        if (_contacts[_index % 8].set_last_name(last_name) == "")
        {
            std::cout << "INVALID INPUT: please enter a valid name!!" << std::endl;
            flag = 1;
        }
    }

    while (std::cin.good() && (nickname.empty() || flag == 1))
    {
        flag  = 0;
        std::cout << "Nickname> ";
        getline(std::cin, nickname);
        if (nickname.empty())
            std::cout << "INVALID INPUT: please enter non empty name!!" << std::endl;
        if(_contacts[_index % 8].set_nickname(nickname) == "")
        {
            std::cout << "INVALID INPUT: please enter a valid name" << std::endl;
            flag = 1;
        }
    }
    
    while (std::cin.good() && (phone_number.empty() || flag == 1))
    {
        flag = 0;
        std::cout << "Phone number> ";
        getline(std::cin, phone_number);
        if (phone_number.empty())
            std::cout << "INVALID INPUT: please enter non empty number!!" << std::endl;
        if(_contacts[_index % 8].set_phone_number(phone_number) == "")
        {
            std::cout << "INVALID INPUT: please enter a valid number" << std::endl;
            flag = 1;
        }
    }

    while (std::cin.good() && (darkest_secret.empty() || flag == 1))
    {
        flag = 0;
        std::cout << "Darkest secret: ";
        getline(std::cin, darkest_secret);
        if (darkest_secret.empty())
            std::cout << "INVALID INPUT: please enter non empty string!!" << std::endl;
        _contacts[_index % 8].set_darkest_secret(darkest_secret);
    }

    this->_index++;
    std::cout << "Contact added!!!" << std::endl;
    std::cin.clear();
}

void    Phonebook::search_contact()
{
    int id = 0;
    std::string str;
    view_contact();
    std::cout << "Enter the contact\'s ID: " << std::endl;
    std::cout << "> ";
    std::cin >> str;
    id = atoi(str.c_str());
    if (std::cin.fail() || (id < 0) || (id > 7) || str.length() > 1)
        std::cout << "Invalid input!" << std::endl;
    else
    {
        std::cout   << " ----------------------------------------------------------------- \n"
                    << "|    ID    |First Name|Last Name | Nickname |Phone Num |DarkSecret|\n"
                    << "|-----------------------------------------------------------------|\n";

        std::cout << '|' << std::setw(10) << id;
        std::cout << '|' << std::setw(10) << _contacts[id].get_first_name();
        std::cout << '|' << std::setw(10) << _contacts[id].get_last_name();
        std::cout << '|' << std::setw(10) << _contacts[id].get_nickname();
        std::cout << '|' << std::setw(10) << _contacts[id].get_phone_number();
        std::cout << '|' << std::setw(10) << _contacts[id].get_darkest_secret();
        std::cout << '|' << std::endl;
        std::cout   << " ----------------------------------------------------------------- \n"<< std::endl;
    }
    std::cin.clear();
    std::cin.ignore(1000, '\n');
}

void    Phonebook::view_contact() const
{
    std::cout   << " ------------------------------------------- \n"
                << "|                Contact List               |\n"
                << "|-------------------------------------------|\n"
	            << "|    ID    |First Name| Last Name| Nickname |\n"
	            << "|-------------------------------------------|\n";

    for (int i = 0; i < 8; i++)
    {
        std::cout << '|' << std::setw(10) << i;
        std::cout << '|' << std::setw(10) << _contacts[i].get_first_name();
        std::cout << '|' << std::setw(10) << _contacts[i].get_last_name();
        std::cout << '|' << std::setw(10) << _contacts[i].get_nickname();
        std::cout << '|' << std::endl;

    }
        std::cout   << " ------------------------------------------- \n"<< std::endl;
}

void        Phonebook::user_manual()
{
    std::cout << "#######################################" << std::endl;
    std::cout << "#                                     #" << std::endl;
    std::cout << "#     Welcome to awesome Phonebook    #" << std::endl;
    std::cout << "#     01. ""\033[32m""ADD" "\033[0m""                         #" << std::endl;
    std::cout << "#     02. ""\033[32m""SEARCH" "\033[0m""                      #" << std::endl;
    std::cout << "#     03. ""\033[31m""EXIT" "\033[0m""                        #" << std::endl;
    std::cout << "#                                     #" << std::endl;
    std::cout << "#######################################" << std::endl;

}

int main(void)
{
    Phonebook Phonebook;
    std::string str;
    Phonebook.user_manual();
    std::cout << "\033[32m""> ""\033[0m";
    while (getline(std::cin, str))
    {
        if (!str.compare("ADD") || !str.compare("add"))
            Phonebook.add_contact();
        else if (!str.compare("SEARCH") || !str.compare("search"))
            Phonebook.search_contact();
        else if (!str.compare("EXIT") || !str.compare("exit"))
            break;
        else
            std::cout << "cmd not found, use the manual!" << std::endl;
        std::cout << "\033[32m""> ""\033[0m";
    }
    return (0);
}
