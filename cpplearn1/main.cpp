#include <cstdlib>
#include <iostream>
using std::cin,std::cout,std::endl;
int main()
{
    int a,b;
    a=rand();
    cout<<"please guess and input a number:"<<endl;
    while(1)
    {
        cin >> b;
        if (b == a) {
            cout << "Congratulation,you are right!" << "The number is " << b << endl;
            break;
        } else {
            if (b < a)cout << "Sorry,you are worng,maybe you can input a bigger number,please try it again" << endl;
            else if (b > a)
                cout << "Sorry,you are worng,maybe you can input a smaller number,please try it again" << endl;
        }
    }
    return 0;
}