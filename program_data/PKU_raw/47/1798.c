/*
 * 3.cpp
 *????
 *  Created on: 2012-11-5
 *      Author: ???
*/
int main()
{
    int N,i,j;
    cin>>N;
    const int n=N;
    int a[n];
    for(i=0;i<n;i++)
    cin>>a[i];
    cout<<a[n-1];
    for(j=1;j<n;j++)
    	cout<<" "<<a[n-1-j];
}
