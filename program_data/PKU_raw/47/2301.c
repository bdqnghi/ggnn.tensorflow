/*
 * 12.10.10b.cpp
 *  Created on: 2012-10-10
 *      Author: ???
 *      ???????
 */
int main()
{
	int n,m,a[100],i=0;
	cin>>n;
	m=n;
	while(n--)
		{i=i+1;
		cin>>a[i];
		}
	while(m--)
	   {if(m!=0)
	   	   {
		   cout<<a[i]<<' ';
		   i=i-1;
	   	   }
	   else cout<<a[1];
	    }
return 0;
}