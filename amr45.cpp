#include <iostream>
int main()
{
    int a=0;
    int b=1;
    int c=0;
    int n;
    std::cin>>n;
    for(int i=0;i<n;++i)
    {
        c=a+b;
        a=b;
        b=c;
        
    }
    std::cout<<a;
}