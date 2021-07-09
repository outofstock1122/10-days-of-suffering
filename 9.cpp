#include <iostream>

int main()
{
    std::cout<<"Enter matrix size :";
    int matrix_size;
    std::cin>>matrix_size;
    int matrix[matrix_size][matrix_size]={0};
    std::cout<<"Enter Matrix Elements :"<<std::endl;
    for(int i=0;i<matrix_size;++i){
    for(int k=0;k<matrix_size;++k)
    std::cin>>matrix[i][k];}
    
    for(int i=0;i<matrix_size;++i){
        std::cout<<"\n";
        for(int k=0;k<matrix_size;++k)
        std::cout<<matrix[i][k]<<"  ";
    }
    int sum=0;
    std::cout<< "the side diagonal elements: "; 
    for(int i=matrix_size-1, k=0; i>=0, k<matrix_size; --i,++k){
    std::cout << matrix[i][k];
    sum+=matrix[i][k];}
    std::cout<<" Main Diagonal Elements :";
    for(int i=0,k=0;i<matrix_size;++i,++k){
    std::cout<<matrix[i][k];
    sum+=matrix[i][k];}
    std::cout<<" Sum of diagonals :"<<sum;
    
    

    return 0;
}
