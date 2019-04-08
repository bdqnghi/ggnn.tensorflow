/*
 * 1.cpp
 *????????
 *  Created on: 2012-11-6
 *      Author: ???
*/
int main()
{
	int N,k,i,j=0,i1,s=0;
	cin>>N;
	const int n=N;
	int a[n];
	for(i=0;i<n;i++)
		cin>>a[i];
	cin>>k;
	for(i=0;i<n;i++)
		if(a[i]==k)
			s++;
       for(i=0;i<n; )
				{
    	   if(j<s)
			{if(a[i]==k)
				{for(i1=i;i1<n-1;i1++)
				a[i1]=a[i1+1];
				a[n-1]=k;
				j++;}
			else i++;
				}
    	   else break;
				}
	cout<<a[0];
	for(i=1;i<n-s;i++)
    cout<<" "<<a[i];

}



