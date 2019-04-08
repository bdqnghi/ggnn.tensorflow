int  main()
{
	int row,col,k,j;
	int time=0;
	cin>>row>>col;
	int arr[100][100];
	for(k=0;k<row;k++)
		for(j=0;j<col;j++)
		{
			cin>>arr[k][j];
		}
        int i=0;
	while(time<row*col)
	{

		for(k=i;k<col-i&&time<row*col;k++)
		{
			cout<<arr[i][k]<<endl;
			time++;
		}
		for(k=i+1;k<row-i&&time<row*col;k++)
		{
			cout<<arr[k][col-i-1]<<endl;
			time++;
		}
		for(k=col-i-2;k>=i&&time<row*col;k--)
		{
			cout<<arr[row-i-1][k]<<endl;
			time++;
		}
		for(k=row-i-2;k>i&&time<row*col;k--)
		{
			cout<<arr[k][i]<<endl;
			time++;
		}
		i++;
	}
	return 0;
}