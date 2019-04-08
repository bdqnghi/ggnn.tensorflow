
int test[9][9];
int follow[9][9];

void change()
{
	int i,j;
	for(i=0;i<9;i++)
		for(j=0;j<9;j++)
		{
			test[i][j]+=follow[i][j]*2;
			test[i-1][j]+=follow[i][j];
			test[i+1][j]+=follow[i][j];
			test[i][j-1]+=follow[i][j];
			test[i][j+1]+=follow[i][j];
			test[i-1][j-1]+=follow[i][j];
			test[i-1][j+1]+=follow[i][j];
			test[i+1][j-1]+=follow[i][j];
			test[i+1][j+1]+=follow[i][j];
		}
	for(i=0;i<9;i++)
		for(j=0;j<9;j++)
		{
			test[i][j]=test[i][j]-follow[i][j];
		}
	for(i=0;i<9;i++)
		for(j=0;j<9;j++)
			follow[i][j]=test[i][j];
}


int main()
{
	int m,n;
	cin>>m>>n;
	int i,j;
	for(i=0;i<9;i++)
		for(j=0;j<9;j++)
		{
			test[i][j]=0;
			follow[i][j]=0;
		}
	test[4][4]=follow[4][4]=m;
	while(n--)
	{
		change();
	}
	for(i=0;i<9;i++)
	{
		for(j=0;j<8;j++)
			cout<<test[i][j]<<" ";
		cout<<test[i][8];
		cout<<endl;
	}
	return 0;
}

