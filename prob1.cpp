#include <bits/stdc++.h>

using namespace std;

// Complete the encryption function below.
void encryption(string s) {
int x,y,l;
l=s.size();
x=floor(sqrt(l));
y=ceil(sqrt(l));
//cout<<x<<" "<<y;
string op;
char arr[x][y];
if (x >= sqrt(l)) y = x; else y = x + 1;
int k=0,i=0,j=0;
for(int i=0;i<y;++i) 
{
    for(int j=i;j<l;j+=y)
        cout<<s[j];
    cout<<" ";
}
}
int main()
{
    
    string s;
    getline(cin, s);

    encryption(s);

    return 0;
}

