int c[11][11]={0};                        //???n?????
int temp[11][11]={0};                 //????n-1?????
int n,m;
int deal(int num);
int main()
{
	int i,j;
	cin>>m>>n;
	c[5][5]=m;
	temp[5][5]=m;
	deal(1);
	for (i=1;i<=9;i++)
	{
		for (j=1;j<=8;j++)
			cout<<c[i][j]<<' ';
		    cout<<c[i][9];
		cout<<endl;
	}
	return 0;
}
int deal(int num)
{
	int i,j;
	if (num==n+1)                    //??????
		return 0;
	else
	{
		for (i=1;i<=9;i++)
			for (j=1;j<=9;j++)
			{
				c[i][j]+=temp[i][j];
				c[i+1][j]+=temp[i][j];
				c[i-1][j]+=temp[i][j];
				c[i][j+1]+=temp[i][j];
				c[i][j-1]+=temp[i][j];
				c[i+1][j+1]+=temp[i][j];
				c[i+1][j-1]+=temp[i][j];
				c[i-1][j+1]+=temp[i][j];
				c[i-1][j-1]+=temp[i][j];

			}
		for (i=1;i<=9;i++)
			for (j=1;j<=9;j++)
				temp[i][j]=c[i][j];
			deal(num+1);
	}

}