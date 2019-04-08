int main()
{
	int a[100][100]={0};
	int hang,lie;
	cin>>hang>>lie;
	int i,j;
	for(i=0;i<hang;i++)
	{
		for(j=0;j<lie;j++)
			cin>>a[i][j];
	}
	int t;
	for(t=0;t<=hang+lie-2;t++)
	{
		for(i=0;i<hang;i++)
		{
			for(j=0;j<lie;j++)
			{
				if(i+j==t)
					cout<<a[i][j]<<endl;
			}
		}
	}
	return 0;
}