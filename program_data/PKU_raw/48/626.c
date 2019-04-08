int main()
{
	int sum=0,day=0,a[11][11],b[11][11],i=0,j=0,p=0; //???????sum,????day,?????a[11][11],??????b[11][11],??????i,j
	cin>>sum>>day;
	for(i=0;i<11;i++)  //?????
	{
		for(j=0;j<11;j++)
		{
			a[i][j]=0;
		}
	}
	a[5][5]=sum;      //????????????????
	for(i=0;i<11;i++)
	{
		for(j=0;j<11;j++)
		{
			b[i][j]=a[i][j];
		}
	}
	for(p=0;p<day;p++)
	{
		for(i=0;i<11;i++)
		{
			for(j=0;j<11;j++)      //???????a[i][j]?????b[i][j]
			{
				b[i][j]=a[i][j];
			}
		}
		for(i=1;i<=9;i++)
		{
			for(j=1;j<=9;j++)
			{
				a[i][j]=2*b[i][j]+b[i-1][j-1]+b[i-1][j]+b[i-1][j+1]+b[i][j-1]+b[i][j+1]+b[i+1][j-1]+b[i+1][j]+b[i+1][j+1]; //???????
			}
		}
	}
	for(i=1;i<=9;i++)   
	{
		for(j=1;j<9;j++)
		{
			cout<<a[i][j]<<" ";  //????????
		}
		cout<<a[i][9]<<endl;
	}
		return 0;
}
