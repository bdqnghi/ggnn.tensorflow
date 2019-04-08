/*
 * 006.cpp
 * name:
 *  Created on: 2011-12-31
 *      Author: 1100012729
 */
int main(){
	int n,k,i,j,p,ans;
	int a[101][101],g;
	cin>>n;
	k=n;

	while (k--)
	{
		ans=0;
		for (i=0;i<n;i++)
			for (j=0;j<n;j++)
				cin>>*(*(a+i)+j);
		p=n;
		while (p-->1){
		for (i=0;i<=p;i++)
		{
			g=*(*(a+i));
			for (j=0;j<=p;j++)
			{
				if (*(*(a+i)+j)<g)
				{
					g=*(*(a+i)+j);
				}
			}
			for  (j=0;j<=p;j++)
				*(*(a+i)+j)-=g;
		}
		for (j=0;j<=p;j++)
		{
			g=*(*(a)+j);
			for (i=0;i<=p;i++)
			{
				if (*(*(a+i)+j)<g)
				{
					g=*(*(a+i)+j);
				}
			}
			for  (i=0;i<=p;i++)
				*(*(a+i)+j)-=g;
		}
		ans+=*(*(a+1)+1);
		for(i=2;i<=p;i++)
			*(*(a+i-1))=*(*(a+i));
		for (j=2;j<=p;j++)
			*(*(a)+j-1)=*(*(a)+j);
		for (i=2;i<=p;i++)
			for (j=2;j<=p;j++)
				*(*(a+i-1)+j-1)=*(*(a+i)+j);
	}
		cout<<ans<<endl;
	}
	return 0;
}
