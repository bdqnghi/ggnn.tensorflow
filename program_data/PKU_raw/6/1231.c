/*
 * 1.cpp
 *
 *  Created on: 2011-12-25
 *      Author: Administrator
 */
int main()
{
	int k,m,n,i,x,y,ans,a[101][101];
	int (*p)[101]=a;
	cin>>k;
	for(i=1;i<=k;i++)
	{
		ans=0;
		cin>>m>>n;
		for(x=0;x<m;x++)
			for(y=0;y<n;y++){
				cin>>*((*p+y)+x);
				if(x==0 || y==0 || x==m-1 || y==n-1)
					ans=ans+*((*p+y)+x);
			}
		cout<<ans<<endl;
	}
	return 0;
}