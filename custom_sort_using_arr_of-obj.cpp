#include<bits/stdc++.h>
using namespace std;
class customSort
{
    public:
        char c;
        int cnt;
};

float cmt(customSort a, customSort b)
{
    if(a.cnt>b.cnt) return true;
    else return false;
}
int main()
{
    int n;cin >>n;
    customSort a[26];

    // initalize char a to z and seting cmt valu 0 to all
    for(int i=0; i<26; i++)
    {
        a[i].c = i+'a';
        a[i].cnt = 0;
    }

    // taking input tand incriseing cnt
    for(int i=0; i<n; i++)
    {
        char x; cin>> x;
        a[x-'a'].cnt++;
    }

    // Sorting the obj besed on obj
    sort(a,a+26,cmt);

    // printing holw arr of obj
    for(int i=0; i<26; i++)
    {
        if(a[i].cnt >0)
        {
            for(int j=0; j<a[i].cnt; j++)
            {
                cout << a[i].c;
                //cout << a[i].c << " " << a[i].cnt<<endl;
            }
        }
    }
    return 0;
}