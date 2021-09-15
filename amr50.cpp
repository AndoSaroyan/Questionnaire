#include <iostream>
int main (){
    double mij=0;
    double gum=0;
    double art=1;
    int arr[5];
    std::cout<<"Mutqagreq Zangavci 5 Arjeqnery:";
    for(int i=0;i<5;++i)
    {std::cin>>arr[i];}
 
 for(int a=0;a<5;++a){
     gum+=arr[a];
 }
std::cout<<"Arjeqneri Gumary:"<<gum<<std::endl;

for(int j=0;j<5;++j){
    art*=arr[j];
}

std::cout<<"Arjeqneri Artadryaly:"<<art<<std::endl;

mij=(art+gum)/2;
std::cout<<"Mijin Tvabanakany:"<<mij;
  return 0;


}