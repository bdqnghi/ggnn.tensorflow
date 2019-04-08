int main()
{
	int i=0,j=0,row=0,col=0,count=0,k=0,l=0,m=0;
	int a[110][110]={0};
	cin>>row>>col;
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			cin>>a[i][j];
		}
	}//????????
	int total = row * col;
	for(i=0;count < total;i++)//???????????row?col??????
	{
		for(j=i;j<col-i;j++)
		{
			cout<<a[i][j]<<'\n';
			count++;
		}
		if(count >= total)
			break;
		for(k=i+1;k<row-i;k++)
		{
			cout<<a[k][col-i-1]<<'\n';
			count++;
		}
		if(count >= total)
			break;
		for(l=col-i-2;l>=i;l--)
		{
			cout<<a[row-i-1][l]<<'\n';
			count++;
		}
		if(count >= total)
			break;
		for(m=row-i-2;m>=i+1;m--)
		{
			cout<<a[m][i]<<'\n';
			count++;
		}//??????????????,????????????????????
	}
	return 0;
}