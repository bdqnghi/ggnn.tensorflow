int main()
{int row,col;
int i,j;
cin>>row>>col;
int a[101][101];
for(i=0;i<row;i++)
{
 for(j=0;j<col;j++)
 {
  cin>>a[i][j];
 }
}
int x;
for(x=0;x<=row&&x<=col;x++)
{
	i=x;
	if(x<=col-1-x)
	{
	for(j=x;j<=col-1-x;j++)
	{
		cout<<a[i][j]<<endl;
	}
	}
	else {break;}
	j=j-1;
	if(x+1<=row-1-x)
	{
		for(i=x+1;i<=row-1-x;i++)
		{
			cout<<a[i][j]<<endl;
		}
	}
	else {break;}
	i=row-1-x;
	if(x<=col-2-x)
	{
	for(j=col-2-x;j>=x;j--)
	{
		cout<<a[i][j]<<endl;
	}
	}
	else {break;}
	j=x;
	if(x+1<=row-2-x)
	{
		for(i=row-2-x;i>=x+1;i--)
		{
			cout<<a[i][j]<<endl;
		}
	}
	else {break;}
}
return 0;
}

