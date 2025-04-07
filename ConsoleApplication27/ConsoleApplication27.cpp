

#include <iostream>
using namespace std;
int my_increment(int* ig, int n)
{
    n = 1;
    *ig += n;
    return *ig;
}
void multiply(int* one, int* two,int* result)
{
    *result = *one * *two;
}
void negate(double* R)
{
    *R = -*R;
}
void setValue(int* num, int swap)
{
    *num = swap;
}
void concatenateDigits(int* num1, int* num2,int* result)
{
    int tempB = *num2;
    int multiplier = 1;

    
    if (tempB == 0) {
        multiplier = 10;
    }
    else {
        while (tempB != 0) {
            multiplier *= 10;
            tempB /= 10;
        }
    }

    *result = (*num1) * multiplier + (*num2);
}
int main()
{
 
}

