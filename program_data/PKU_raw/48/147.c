int b[11][11],d[11][11];
void breed();
int main()
{
	int days,i,j;
	for(i=0;i<11;i++)
	{
		for(j=0;j<11;j++)
		{
			b[i][j]=d[i][j]=0;
		}
	}
	cin>>b[5][5]>>days;
	for(i=1;i<=days;i++)
	{
		breed();
	}
	for(i=1;i<=9;i++)
	{
		for(j=1;j<=9;j++)
		{
			if(j==9)
			{
				cout<<b[i][j]<<endl;
			}
			else
			{
				cout<<b[i][j]<<" ";
			}
		}
	}
	return 0;
}


void breed()
{
	int i,j;
	for(i=1;i<=9;i++)
	{
		for(j=0;j<=10;j++)
		{
			d[i][j]=b[i][j];
		}
	}
	for(i=1;i<=9;i++)
	{
		for(j=1;j<=9;j++)
		{
			b[i][j]=d[i][j]*2+d[i-1][j-1]+d[i-1][j]+d[i-1][j+1]+d[i][j-1]+d[i][j+1]+d[i+1][j-1]+d[i+1][j]+d[i+1][j+1];
		}
	}
}