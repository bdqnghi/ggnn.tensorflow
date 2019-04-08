int a[1000][1000]={{255}},b[1000]={0},g[1000]={0};
int main()
{
	int n=0,i=0,j=0,c=0,d=0,e=0,f=0;
	cin>>n;
	if(n>0 && n<1000)
	{
		for(j=0;j<n;j++)
			for(i=0;i<n;i++)
				a[j][i]=255;
		for(j=0;j<n;j++)
			for(i=0;i<n;i++)
				cin>>a[j][i];
			for(j=0;j<n;j++)
			for(i=0;i<n;i++)
				{
					if(a[j][i]==0)
					{
					c=j,d=i;
					goto next;
					}
			}
			next:;
		for(j=0;j<n;j++)
			for(i=0;i<n;i++)
				{
					if(a[j][i]==0)
					e=j,f=i;
			}
			}
				cout<<(e-c-1)*(f-d-1)<<endl;
			
	return 0;
}