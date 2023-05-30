#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; 
    cin >> n;
    int fre[26] = {0};
    
    for(int i=0; i<n; i++)
    {
        char a; cin >> a;
        fre[a-'a']++;
    }

    for(char i='a'; i<='z'; i++ )
    {
        if(fre[i-'a']>0)
        {
            for(int j=0; j<fre[i-'a']; j++)
            {
                cout << i;
            }
        }
    }
    return 0;
}