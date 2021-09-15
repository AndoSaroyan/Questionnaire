#include <iostream>
void foo (int* arr )
{
    static int i=0;
    if(i!=5){
  std::cout<<*arr<<std::endl;;
  i=i+1;
  return foo(arr+1);}

return;
}


int main()
{
    std::cout<<"Mutqagreq 5 Arjeq:";
  int arr [5];
  for(int a=0;a<5;++a){
      std::cin>>arr[a];
  }

  foo(arr);
  return 0;
}
