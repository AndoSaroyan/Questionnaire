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

    student man ;
         man.name = boy.name;
         man.surname =girl.surname;
         man.age=(boy.age+girl.age)/2;
         man.subject=boy.subject; 

    std::cout<<std::endl;
    std::cout<<"Erord Usanoxi Tvyalnern en:"<<std::endl;
    std::cout<<"Anun:"<<man.name<<std::endl;
    std::cout<<"Azganun:"<<man.surname<<std::endl;
    std::cout<<"Tariq:"<<man.age<<std::endl;
    std::cout<<"Ararka(ner):"<<man.subject<<std::endl;


    return 0;
}