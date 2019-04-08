int main()
{
	int row,col;
	cin>>row>>col;
	int i=0,j=0,k=0;
	int a[100][100];
	for(i=0;i<row;i++)
		for(j=0;j<col;j++)
			cin>>a[i][j];
	int (*p)[100]=a;
	for(k=0;k<col;k++)
		for(i=0;i<row&&k-i<col&&k-i>=0;i++)
			cout<<*(*(p+i)+k-i)<<endl;
	for(k=col;k<=(row-1)+(col-1);k++)
		for(i=k-col+1;i<row&&k-i>=0;i++)
			cout<<*(*(p+i)+k-i)<<endl;
	return 0;
}