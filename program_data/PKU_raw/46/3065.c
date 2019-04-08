int main ()
{
	int a[100][100]={0},cnt=0,i,j,row,col,l=0;
	cin >> row>>col ;
	cnt = row * col ;
	for(i = 0 ;i < row;i++)
	{
		for(j = 0 ; j <col ;j++)
			cin >> a[i][j] ;
	}
	while(cnt > 0)
	{
		for(j=l;j<(col-l);j++)
		{
			cout << a[l][j]<<endl;
			cnt--;
		}
		if(cnt == 0) break ;
		for (i=(l+1);i<row-l;i++)
		{
			cout << a[i][col-l-1]<<endl;
			cnt--;	
		}
		if(cnt == 0) break ;
		for(j=col-l-2;j>l-1;j--)
		{
			cout << a[row-l-1][j]<<endl;
			cnt-- ;
		}
		if(cnt == 0) break ;
		for(i=row-l-2;i>l;i--)
		{
			cout << a[i][l]<<endl;
			cnt--;
		}
		l++ ;
	}
	return 0 ;
}

