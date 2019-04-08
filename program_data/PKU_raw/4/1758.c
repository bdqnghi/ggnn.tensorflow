//??????????


int main()
{
	int a[100][100];
	int row,col;
	cin>>row>>col;
	for(int i=0;i<row;i++)              //????
		for(int j=0;j<col;j++)
			cin>>a[i][j];
	for(int p=0;p<=row+col-2;p++)       //????????? ??
	{
		for(int i=0;i<=p;i++)
		{
			int j=p-i;
			if(i>row-1||j>col-1||j<0)
				continue;
			cout<<a[i][j]<<endl;
		}
	}
	return 0;
}