#include "Matrix.hpp"

#include "lmath.hpp"
#include <iostream>


using namespace std;
using namespace lmath;



Matrix get_ones(size_t n,size_t m=0)
{
        if(m==0)
        {
            return Matrix(n, n,1); 
        }
        return Matrix(n,m,1);
        
        
}

int main() {
    Matrix A=get_ones(5);
    Matrix B=get_ones(5);
    
    cout<<A*B<<endl;
    
    Matrix C({1,2,3,4});
    cout<<C<<endl;
    return 0;
}