#include <iostream>

int fact(int n)
{
    if(n<2)
    {return 1;}
    return n*fact(n-1);
}

int main()
{
    std::cout<<"Vor Tvi Factorialn Eq Uzum Hashvel ?:";
    int n=0;
    std::cin>>n;
    std::cout<<fact(n);
}
