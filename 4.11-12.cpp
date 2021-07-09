#include <iostream>
int main()
{
    std::cout<<"Enter Array Size :";
    int arraysize;
    std::cin>>arraysize;
    int array[arraysize]={0};
    std::cout<<"Enter Array Numbers"<<std::endl;
    for(int i=0;i<arraysize;++i){
    std::cin>>array[i];}
    int kentqanak=0;
    int zuygqanak=0;
    
    for(int i=0;i<arraysize;++i){
    if(array[i]%2==0)
    ++zuygqanak;
    else
    ++kentqanak;
    }
    std::cout<<"Pair numbers :"<<zuygqanak<<std::endl;
    std::cout<<"Not Pair numbers :"<<kentqanak<<std::endl;
    
}
