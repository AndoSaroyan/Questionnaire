#include <iostream>

void print (int num)
{
    if(num==0)
    {return;}
    std::cout<<num<<std::endl;
    print(num-1);
}

int main(){

    std::cout<<"Mutqagreq Tivy:";
    int num;
    std::cin>>num;
    print(num);

    return 0;
}