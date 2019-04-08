/**
*@file 6.cpp
*@author ???
*@date 2013-10-24
*@description ????
*/


int main()
{
    int n, high, low, pre, hour;
    cin >> n;
    pre=0;
    hour=0;
    while(n--)
 {
    scanf("%d %d",&high,&low);
    if(high>=90&&high<=140&&low>=60&&low<=90)
    pre++;
    if(!(high>=90&&high<=140&&low>=60&&low<=90))
    pre=0;
    hour=pre>=hour?pre:hour;
 }
    
    cout << hour << endl;
    return 0;
} 