#include <iostream>
#include<string>
using namespace std;
/*
int*date;
*/
/*struct man
{
    int age ;
    int weight;
    string *name;

};*//*

void add(int &a)
{
    date=new int[10]{0};
    for(int i=0;i<a;i++)
    {
        date[i]+=a+1;
    }

}
int main()
{
    int a=10;
    add(a);
    cout<<a<<endl;

    for (int i = 0; i <a ; ++i)
    {
        cout<<date[i]<<endl;
    }
    delete[]date;
    cout<<date[0]<<endl;
    return 0;
}
*/

class student
{
public:
    string name;
    string num;
    void iname(string&name)
    {
        cin>>name;
        cout<<name<<endl;
    }
    void inum(string&nums)
    {
        cin >> nums;
        cout << nums << endl;
    }

};
int main()
{
    student c1;
    c1.iname(c1.name);
    c1.inum(c1.num);
    return 0;
}