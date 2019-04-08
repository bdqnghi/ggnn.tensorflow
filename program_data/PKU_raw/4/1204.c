int main()
{
	int row,col,t,i,j,k;
	int a[101][101];
	cin>>row>>col;
	t=row+col-1;
	for(i=0;i<row;i++)
		for(j=0;j<col;j++)
			cin>>*(*(a+i)+j);
	for(i=0;i<t;i++)
		for(j=0;j<row;j++)
			for(k=0;k<col;k++)
				if((j+k)==i)
				{cout<<*(*(a+j)+k)<<endl;break;}
	return 0;
}