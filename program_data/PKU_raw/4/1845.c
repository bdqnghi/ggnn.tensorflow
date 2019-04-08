int main()
{
	int array[100][100];
	memset(array,0,sizeof(array));
	int i,j,k,row,col;
	cin>>row>>col;
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
			cin>>array[i][j];
	}
	for(k=0;k<row+col-1;k++)
	{
		for(i=0;i<row;i++)
			for(j=0;j<col;j++)
			{
				if(i+j == k)
					cout<<array[i][j]<<endl;
			}
	}
	return 0;
}

	
	




