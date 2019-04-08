int moun[30][30];
int high[30][30];
int main()
{
	int row,col;
	cin>>row>>col;

	for(int i=0;i<=row+1;i++)
		for(int j=0;j<=col+1;j++)
		 moun[i][j]=0;

	for(int i=1;i<=row;i++)
		for(int j=1;j<=col;j++)
			cin>>moun[i][j];

	for(int i=1;i<=row;i++)
		for(int j=1;j<=col;j++)
			if(moun[i][j]>=moun[i-1][j] && moun[i][j]>=moun[i][j-1] && moun[i][j]>=moun[i+1][j] && moun[i][j]>=moun[i][j+1])
				cout<<i-1<<" "<<j-1<<endl;
	 


	return 0;
}

