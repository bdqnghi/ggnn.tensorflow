
int main()
{
	int row,col,sz[8][8];
	char q;
	cin>>row>>q>>col;
	int i,j;
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			cin>>sz[i][j];
		}
	}
	int count=0;
	for(i=0;i<row;i++)
	{
		int a=0;
		for(j=1;j<col;j++)
		{
			if(sz[i][a]<sz[i][j])
			{
				a=j;
			}
		}
		int m=0,k=0;
		for(m=0;m<row;m++)
		{
			if(sz[i][a]>sz[m][a])
			{
				count++;
				break;
			}
			else
				k++;
		}
		if(k==row)
			cout<<i<<'+'<<a;
	}
	if(count==row)
		cout<<"No";
	return 0;
}

