#include <iostream>
int main()
{
  int mynumber[10];
     std::cout<<"Please Enter 10 numbers"<<std::endl;
  for(int i=0;i < 10;++i){
     std::cin>>mynumber[i];}
  for(int i=9;i>=0;--i){
  std::cout<<"Reverse :"<<mynumber[i]<<std::endl;}
}
