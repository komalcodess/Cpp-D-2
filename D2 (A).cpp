#include <iostream>

using namespace std;
double cube(int num){
    double result = num*num*num;
    return result;
}
int main()
{
    double answer = cube(4);
    cout << answer;
    return 0;
}
