#include <bits/stdc++.h>

using namespace std;

// Complete the timeInWords function below.
void timeInWords(int h, int m) {
string num[]={"one","two","three","four","five","six","seven","eight","nine","ten","eleven","twelve","thirteen",
        "fourteen",
        "fifteen",
        "sixteen",
        "seventeen",
        "eighteen",
        "nineteen",
        "twenty",
        "twenty one",
        "twenty two",
        "twenty three",
        "twenty four",
        "twenty five",
        "twenty six",
        "twenty seven",
        "twenty eight",
        "twenty nine"};
if(m==0)
{
    cout<<num[h-1]<<" o' clock";
}
else if(m==15)
{
    cout<<"quarter past "<<num[h-1];
}
else if(m==30)
{
    cout<<"half past "<<num[h-1];
}
else if((1>= m) || (m<30))
{
    if(m==1)
        cout<<num[m-1]<<" minute past "<<num[h-1];
    else
        cout<<num[m-1]<<" minutes past "<<num[h-1];

}
else if(m==45)
    cout<<"quarter to "<<num[h];
else if(m>30)
{
    cout<<num[60-m-1]<<" minutes to "<<num[h];
}    

}

int main()
{
    int h;
    cin >> h;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int m;
    cin >> m;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    timeInWords(h, m);

    return 0;
}

