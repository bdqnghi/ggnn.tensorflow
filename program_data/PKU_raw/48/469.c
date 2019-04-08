int main()
{
	int a[9][9]={0},m,n,i,j,k,num[9][9];
	cin>>m>>n;
	a[4][4]=m;
	for(i=0;i<n;i++)
	{
		for(j=0;j<9;j++)
		for(k=0;k<9;k++)
			num[j][k]=0;
		for(j=0;j<9;j++)
		for(k=0;k<9;k++)
			if(a[j][k]!=0)//????????
			{
				num[j+1][k]=num[j+1][k]+a[j][k];
				num[j-1][k]=num[j-1][k]+a[j][k];
				num[j][k+1]=num[j][k+1]+a[j][k];
				num[j][k-1]=num[j][k-1]+a[j][k];
				num[j-1][k-1]=num[j-1][k-1]+a[j][k];
				num[j-1][k+1]=num[j-1][k+1]+a[j][k];
				num[j+1][k-1]=num[j+1][k-1]+a[j][k];
				num[j+1][k+1]=num[j+1][k+1]+a[j][k];
			}
		for(j=0;j<9;j++)
		for(k=0;k<9;k++)
			if(a[j][k]!=0)//???????
			{
				a[j][k]=a[j][k]*2;
			}
		for(j=0;j<9;j++)//????????
		for(k=0;k<9;k++)
			a[j][k]=a[j][k]+num[j][k];
	}
	for(j=0;j<9;j++)//????
	{
		for(k=0;k<9;k++)
		{
			if(k==0) cout<<a[j][k];
			else cout<<' '<<a[j][k];
		}
		cout<<endl;
	}
	return 0;
}