#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
        string name;
        int roll; 
        int mark;
};
int main()
{
    Student a[5];

// taking input
    for(int i=0; i<3; i++)
    {
        getline(cin,a[i].name);
        cin>>a[i].roll>>a[i].mark;
        cin.ignore();
    }

// output
    for(int i=0; i<3; i++)
    {
        cout <<a[i].name<<endl;
        cout << a[i].roll<<endl;
        cout <<a[i].mark<<endl;
    }
    return 0;
}