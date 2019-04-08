int main()
{
	int a[11][11]={0},b[11][11]={0},i=1,j=1,t=1,number,time;
	cin>>number>>time;
	a[5][5]=number;
	for(i=1;i<=time;i++)
	{
		for(j=1;j<=9;j++)
		{
			for(t=1;t<=9;t++)
			{
				if(a[j][t]!=0)
				{
					b[j][t]+=2*a[j][t];
					b[j+1][t]+=a[j][t];
					b[j-1][t]+=a[j][t];
					b[j+1][t+1]+=a[j][t];
					b[j-1][t+1]+=a[j][t];
					b[j+1][t-1]+=a[j][t];
					b[j-1][t-1]+=a[j][t];
					b[j][t+1]+=a[j][t];
					b[j][t-1]+=a[j][t];
				}
			}
		}
		for(j=1;j<=9;j++)
		{
			for(t=1;t<=9;t++)
			{
				a[j][t]=b[j][t];
				b[j][t]=0;
			}
		}
	}
	for(i=1;i<=9;i++)
	{
		for(j=1;j<=8;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<a[i][9]<<endl;
	}
	return 0;
}
