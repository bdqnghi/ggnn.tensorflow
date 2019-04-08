int main()
{
	int a[100][100];
	int i=0,j=0;
	int row,col;

	cin>>row>>col;
	for(int i=0;i<row;i++)
		for(int j=0;j<col;j++)
			cin>>a[i][j];

	for(;i!=(row-1)||j!=(col-1);)
	{
		cout<<*(*(a+i)+j)<<endl;
		i++;
		j--;
		if(j<0||i>row-1)
		{
			if(i+j+1<col)
			{
				j=i+j+1;
				i=0;
			}
			else
			{
				i=i+j+1-(col-1);
				j=col-1;

			}
		}

	}
	cout<<*(*(a+row-1)+col-1);
}
