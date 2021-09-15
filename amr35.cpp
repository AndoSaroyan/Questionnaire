#include <iostream>
struct student{
    std::string name;
    std::string surname;
    int age;
    std::string subject;
};

int main(){
    student boy;
    student girl;
    std::cout<<"Arajin Usanoxi Anuny:";
    std::cin>>boy.name;
    std::cout<<"Arajin Usanoxi Azganun:";
    std::cin>>boy.surname;
    std::cout<<"Arajin Usanoxi Tariqy:";
    std::cin>>boy.age;
    std::cout<<"Arajin Usanoxi Ararkanery:";
    std::cin>>boy.subject;
    std::cout<<std::endl;


    std::cout<<"Erkrord Usanoxi Anuny:";
    std::cin>>girl.name;
    std::cout<<"Erkrord Usanoxi Azganun:";
    std::cin>>girl.surname;
    std::cout<<"Erkrord Usanoxi Tariqy:";
    std::cin>>girl.age;
    std::cout<<"Erkrord Usanoxi Ararkanery:";
    std::cin>>girl.subject;

  if(boy.age>girl.age){
      std::cout<<boy.name;
  }
  else {std::cout<<girl.name;}


    return 0;
}