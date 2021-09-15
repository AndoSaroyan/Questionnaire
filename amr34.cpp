#include <iostream>
struct student{
    std::string name;
    std::string surname;
    int age;
    std::string subject;
};

int main(){
    student boy;
    std::cout<<"Usanoxi Anuny:";
    std::cin>>boy.name;
    std::cout<<"Usanoxi Azganun:";
    std::cin>>boy.surname;
    std::cout<<"Usanoxi Tariqy:";
    std::cin>>boy.age;
    std::cout<<"Usanoxi Ararkanery:";
    std::cin>>boy.subject;

    return 0;
}