#include <iostream>
void registration(std::string &name, int &ph_no)
{

    std::cout << "Registration  id please : " << '\n';
    std::getline(std::cin, name);
    std::cout << "Ph no please : " << '\n';
    std::cin >> ph_no;
    std::cout << "you are successfullyn registered you can login now \n";
}

void login(std::string &name, int &ph_no)
{
    std::string userid;
    int ph;
    int attempts = 0;
    do
    {
        std::cout << "enter user id please : " << '\n';
        std::cin >> userid;
        std::cout << "enter ph_no please : " << '\n';
        std::cin >> ph;
        if (userid == name && ph == ph_no)
        {
            std::cout << "successfully logged in :" << '\n';
            std::cout << "you got an access...." << '\n';
        }
        else
        {
            std::cout << "ivalid id : " << userid << "and " << ph << '\n';
        }
        attempts = attempts + 1;
        if (attempts == 3)
        {
            std::cout << "To many attempts Try again" << '\n';
        }
    } while ((userid != name || ph != ph_no) && attempts < 3);
}

int main()
{
    std::string name;
    int ph_no;
    // int attempts;
    registration(name, ph_no);
    login(name, ph_no);

    return 0;
}