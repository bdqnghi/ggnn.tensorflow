/*
 * 1000012766_fangpingguo.cpp
 *??:?????
 *  Created on: 2010-12-3
 *      Author: 10154
 */

int kcs(int m,int n)
{
	int cs(int m,int n);
	if(n==2)  return 1;
	if(n>=3) return cs(m,n-1);
	return 0;
}
int bkcs(int m,int n)
{
	int cs(int m,int n);
	if(m==n)   return 1;
	if(m>n)   return cs(m-n,n);
	return 0;
}
int cs(int m,int n)
{
	return kcs(m,n)+bkcs(m,n);
}
int main()
{
	int x,m,n;
	cin>>x;
	for(int i=1;i<=x;i++)
	{
		cin>>m>>n;
		cout<<cs(m,n)<<endl;
	}
return 0;
}
