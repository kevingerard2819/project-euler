#include<iostream>
using namespace std;

int main()
{
    int total=0;
    int one =1;
    int two =2;
    int three = 0;

    while(two <= 4000000)
    {
        three = one + two;
        if(two % 2 == 0)

        {
            total +=two;
        }
        one = two;
        two = three;

    }
    cout << total;
    return 0;

}