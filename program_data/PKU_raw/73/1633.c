int main()
{
	int i,j,a[5][5],max[5],b[5],c[5],k,p;
	p=0;
	for(i=0;i<=4;i++)
	{
		c[i]=0;
		b[i]=0;
		for(j=0;j<=4;j++)
		{
			cin>>a[i][j];
		}
	}
	for(i=0;i<=4;i++)
	{
		max[i]=a[i][0];
		for(j=1;j<=4;j++)
		{
			if(a[i][j]>max[i])
			{
				max[i]=a[i][j];
				b[i]=j;
			}
		}
		for(k=0;k<=4;k++)
		{
			if(a[i][b[i]]<=a[k][b[i]])
			{
				c[i]=c[i]+1;
			}
		}
		if(c[i]==5)
		{
			cout<<i+1<<' '<<b[i]+1<<' '<<max[i]<<'\n';
		}
		else
		{
			p=p+1;
		}
	}
	if(p==5)
	{
		cout<<"not found"<<endl;
	}
	return 0;
}
