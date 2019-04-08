int i,j,k,n;
int num[11][11]={0},num1[11][11]={0},t[11][11]={0};
void turn()
{
	int i,j;
	for(i=0;i<11;i++)
		for(j=0;j<11;j++)
		{
			t[i][j]=num[i][j];
			num[i][j]=num1[i][j];
			num1[i][j]=t[i][j];
		}
}
int main()
{
	cin>>i;
	num[5][5]=i;
	cin>>n;
	for(i=0;i<n;i++)
	{
		for(j=1;j<10;j++)
		{
			for(k=1;k<10;k++)
			{
				num1[j][k]=2*num[j][k]+(num[j][k+1]+num[j][k-1]+num[j+1][k]+num[j-1][k]+num[j+1][k+1]+num[j+1][k-1]+num[j-1][k+1]+num[j-1][k-1]);
			}
		}
		turn();
	}
	for(i=1;i<10;i++)
	{
		for(j=1;j<9;j++)
		{
			cout<<num[i][j]<<' ';
		}
		cout<<num[i][9]<<endl;
	}
	return 0;
}