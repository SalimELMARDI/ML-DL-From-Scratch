#include <vector>
#include <iostream>
#include <bits/stdc++.h>
#include <omp.h>
#include "include/lmath/lmath.hpp"







using namespace std;
using namespace lmath;


int main() {
    Matrix A=get_ones(5,5);
    Matrix B=get_ones(5,8);
    
    cout<<A*B<<endl;
    
    Matrix C({1,2,3,4});
    cout<<C<<endl;
    return 0;
}