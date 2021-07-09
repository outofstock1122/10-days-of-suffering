#include <iostream>
int main()
{
  int mynumber[10];
     std::cout<<"Please Enter 10 numbers"<<std::endl;
  for(int i=0;i < 10;++i){
     std::cin>>mynumber[i];}
  int max=mynumber[0];
  int maxindex;
  for(int i=0;i<10;++i){
     if(mynumber[i]>max){
        max=mynumber[i];
        maxindex=i;
    }
  }
  int min=mynumber[0];
  int minindex;  
  for(int i=0;i<10;++i){
  if(mynumber[i]<min){min=mynumber[i];minindex=i;}
  }

 
  std::cout<<"max number + min number : " << max+ min;
  return 0;
 }


