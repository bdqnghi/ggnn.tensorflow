int main()
{
	int a[5][5],i,j,k,x[5],y[5],big[5],small[5];
	for(i=0;i<=4;i++)
		for(j=0;j<=4;j++)
			cin>>a[i][j];
	for(i=0;i<=4;i++)
	{
		x[i]=0;big[i]=a[i][0];
		for(j=0;j<=4;j++)
		 if(a[i][j]>big[i])
			{
				big[i]=a[i][j];
				x[i]=j;
			}
	}
	for(j=0;j<=4;j++)
	{
		y[j]=0;small[j]=a[0][j];
		for(i=0;i<=4;i++)
		 if(a[i][j]<small[j])
			{
				small[j]=a[i][j];
				y[j]=i;
			}
	}
	int flag=0;
	for(i=0;i<=4;i++)
	{
		if(y[x[i]]==i)
			{
				flag=1;
				cout<<i+1<<' '<<x[i]+1<<' '<<a[i][x[i]]<<endl;
		}
	}
	if(flag==0)
		cout<<"not found";
	return 0;
}