#include <iostream>
int main()
{
    std::string tox;
    std::cout<<"Mutqagreq Toxy:";
    std::getline(std::cin,tox);
    for(int i=tox.length();i>=0;--i)
    {std::cout<<tox[i];}

    return 0;
}