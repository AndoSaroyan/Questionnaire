#include <iostream>
int main(){

    std::cout<<"Enter Number:";
    int n;
    int k=1;
    std::cin>>n;
    for(int i=1;i<=n;++i)
    { k*=i;}
    
std::cout<<k;

return 0;
}