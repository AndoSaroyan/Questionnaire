#include <iostream>

struct point{
    int cordX;
    int cordY;
};

int main()
{
    point ket;
    std::cout<<"Enter x:";
    std::cin>>ket.cordX;
    std::cout<<"Enter y:";
    std::cin>>ket.cordY;
    std::cout<<"Coordinate Pixel ("<<ket.cordX<<","<<ket.cordY<<")"<<std::endl;
}