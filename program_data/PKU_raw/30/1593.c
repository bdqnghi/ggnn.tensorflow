/**
*@file 3.cpp
*@author ???
*@date 2013-10-10
*@description ?7???????
*/

int main() 
{
    int n,i,sum;
    cin >> n;
    i=1;
    sum=0;
 while(i<=n)
 {
    if(i%10!=7&&i%7!=0&&i/10!=7)
    {
        sum+=i * i;
     }
    i++;
 }
    cout << sum << endl;
    return 0;
}
