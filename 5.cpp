#include <iostream>
int main()
{
  int mynumber[5];
  int mynumber1[5];
  int mul=1;
  int mul1=1;
     std::cout<<"Please Enter 5 numbers"<<std::endl;
  for(int i=0;i < 5;++i){
     std::cin>>mynumber[i];
     mul*=mynumber[i];}
     std::cout<<"Please enter 5 numbers again"<<std::endl;
  for(int i=0;i<5;++i){
     std::cin>>mynumber1[i];
     mul1*=mynumber1[i];}
  std::cout<<"Mul of arrays :"<<mul*mul1<<std::endl;
    return 0;
 }
	
