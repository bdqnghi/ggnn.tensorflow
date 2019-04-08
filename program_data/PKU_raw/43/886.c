/*
 * 12.10.11a.cpp
 *  Created on: 2012-10-11
 *      Author: ???
 *      ???????????
 */
int p(int x)
{int i=2;
while(true)
	{
	if(i==(x-1)) {return(1);break;}
	else if (x%i==0){return(2);break;}
	i=i+1;
	}
}
int main()
{
	int n,m,a,k=3;
	cin>>n;
	m=n;
	while(n--)
	{a=m-k;if(k>(m/2))break;
	if(p(k)==1&&p(a)==1)cout<<k<<' '<<a<<endl;
	k=k+2;
	}
return 0;
}