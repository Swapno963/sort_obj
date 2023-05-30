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
    Student a[3];
    // taking input
    for(int i=0; i<3; i++)
    {
        getline(cin, a[i].name);
        cin >> a[i].roll>> a[i].mark;
        cin.ignore();
    }

    // finding max mark obj
        Student mx;
        mx.mark = INT_MIN;

    // findin max
    for(int i=0; i<3; i++)
    {
        if(a[i].mark>mx.mark)
        {
            mx = a[i];
        }
    }

    // finding min obj
    Student mn;
    mn.mark = INT_MAX;

    // finding min
    for(int i=0; i<3; i++)
    {
        if(a[i].mark<mn.mark)
        {
            mn = a[i];
        }
    }
    cout <<mx.name<<" "<<mx.mark<<endl;
    cout <<mn.name<<" "<<mn.mark<<endl;
    return 0;
}