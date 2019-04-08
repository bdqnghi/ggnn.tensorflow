int main()
{
	int p,row,col,i,k,j,a[100][100];     //row:?,col:?
	cin>>row>>col;
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
			cin>>a[i][j];
	}
	if(col>row)
		p=row/2+row%2;
	else
		p=col/2+col%2;
	for(i=0;i<p;i++)      
	{
	for(k=i;k<col-i;k++)
		cout<<a[i][k]<<endl;
	for(k=i+1;k<row-i;k++)
		cout<<a[k][col-i-1]<<endl;
    if(i!=row-i-1)
	{
	for(k=col-i-2;k>=i;k--)
		cout<<a[row-i-1][k]<<endl;
	}
	if(i!=col-i-1)
	{
	for(k=row-i-2;k>i;k--)
		cout<<a[k][i]<<endl;
	}
	}
	return 0;
	}