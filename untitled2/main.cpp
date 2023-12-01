////#include "stdafx.h"
//#include <iostream>
//#include <string>
//using namespace std;
//class A
//{
//private:
//    int n1;
//    int n2;
//
//public:
//
//    A() :n2(34), n1(n2+1) {}
//
//    void Print() {
//        cout << "n1:" << n1 << ", n2: " << n2 << endl;
//    }
//};
//
//int main()
//{
//
//    A a;
//    a.Print();
//
//    getchar();
//    return 1;
//}
//#include "stdafx.h"
//#include <iostream>
//#include <string>
//using namespace std;
//class A
//{
//private:
//    int n1;
//    int n2;
//
//public:
//
//    A(int k1,int k2) :n2(k1), n1(k2) {}
//
//    void Print() {
//        cout << "n1:" << n1 << ", n2: " << n2 << endl;
//    }
//};
//
//int main()
//{
//
//    A a(78,97);
//    a.Print();
//
//    getchar();
//    return 1;
//}
//#include "stdafx.h"
/*
#include <iostream>
#include <string>
#include <vector>

using namespace std;
class A
{
private:
    int n2;
    int n1;

public:

    A(int k1) :n2(k1), n1(n2) {}

    void Print() {
        cout << "n1:" << n1 << ", n2: " << n2 << endl;
    }
};

int main()
{
    std::vector<int>v2(10,2);
    A a(115);
    a.Print();

    getchar();
    return 1;
}*/
#include<iostream>

using namespace std;
int main()
{
    for(int i=0;i<6;i++)

    {
        char a[6]={'A','B','C','D','E','F'};
        int j;
        for(j=0;j<=5-i;j++)
        {
            cout<<' ';
        }
        for(j=0;j<i+1;j++)
        {

            cout<<a[j];
        }
        for(int k=0;k<=i;k++)
        {
            cout<<a[j-2-k];
        }
        cout<<endl;
    }
    return 0;
}