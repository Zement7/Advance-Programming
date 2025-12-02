#include <iostream>
using namespace std;

int factorial(int n) {
    if (n > 1) {
        return n * factorial(n - 1);
    }
    else{
        return  1;
    }     
      
}

int main(){
    int n =5;
    int result = factorial(n);
    cout << "factorial of " << n << "is"<< result << endl;
    return 0; 
}