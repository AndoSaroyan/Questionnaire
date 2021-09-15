#include <iostream>
int* han(int* arr,int* ar, int index ,int size)
{
   for(int i =0;i<index;++i)
   {
       ar [i]=arr[i];
   }
   for(int j=index;j<size;++j)
   {
       ar[j]=arr[j+1];

   }
   
  
   
       return ar;
   

}
int main()
{
    int size;
    std::cout<<"Qani Chapani e Zangvacy ?:";
    std::cin>>size;
    int* arr = new int [size];
    std::cout<<"Mutqagreq Arjeqnery:";
    for(int i=0;i<size;++i)
    {
        std::cin>>arr[i];
    }
    int* ar = new int[size-1];
    std::cout<<"Vor Indexov Tarr-n eq uzum jnjel ?:";
    int index;
    std::cin>>index;
    std::cout<<"Dzer Nor Zangvacn e :";
    han(arr,ar,index,size);
    for(int i=0;i<size-1;++i)
    {
        std::cout<<ar[i]<<" ";
    }
    

delete [] arr;
delete [] ar;
arr=nullptr;
ar=nullptr;
}