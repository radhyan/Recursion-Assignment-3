#include <iostream>
using namespace std;

int pattern(int x) {
    if (x==1) {
        return x;
    } else if (x%2 == 0) {
        return (x/2) * pattern(x-1);
    } else {
        return x * pattern(x-1);
    }
}

int main() {
    int x;
    
    cout<<"Input x as integer "; cin>>x;
    
    int value = pattern(x);
    
    cout<<value<<endl;
}

/*
    when we input a number (example: 5) the coe will execute as such:
    1. when the x isn't = 1 it skips its if statement continuing to the next if else statement
    2. since x doesn't fulfill x%2 = 0 since 5 modulo value is 1 it continues to the last if else statement
    3. thus 5 * the function is returned, where the function will repeat step 1-2
    4. when the value of x is even, it will fulfill the statement where the modulo of 2 of an even number = 0
    it will retruns (x initial-1)/2 * the function of (x initial - 1)-1 where the function will recurse again
    5. when it reaches 1 the function will returns the value of x which is 1 since the x has been decremented into 1
 
    in specific for f(5)
    f(5) = 5 * (4/2) * 3 * (2/2) * 1 = 30
*/

