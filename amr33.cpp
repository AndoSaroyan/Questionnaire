#include <iostream>

bool parz(int tiv)
{
    if (tiv%2 == 1 && tiv%3 !=0 )
    { return true;}
    else {return false;}

}

int main()
{
    std::cout<<"Mutqagreq Tivy:";
    int tiv;
    std::cin>>tiv;
     std::cout<<parz(tiv);

     return 0;
}