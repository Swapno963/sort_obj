#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
        string name;
        int roll; 
        int mark;
};

// compare function for sort
float cmp(Student a, Student b)
{
    if(a.mark<b.mark) return true;
    else return false;
}


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

    sort(a,a+3,cmp);
    
    // printing result
      for(int i=0; i<3; i++)
    {
        cout << a[i].name<<" " << a[i].roll<<" "<< a[i].mark<<endl;
       
    }
    return 0;
}