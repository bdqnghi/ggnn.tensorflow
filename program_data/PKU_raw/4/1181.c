int main()
{
	int row,col;
	cin>>row>>col;
	int a[100][100];
	for(int i=0;i<=row-1;i++)
	
	{
		for(int s=0;s<=col-1;s++)
		{
			cin>>a[i][s];
		}
		cout<<endl;
	}
	int h=-1,l=2;
	cout<<a[0][0]<<endl;
	for(int t=1;t<=col-1;t++)
	{
	
		
		while(l>0 && h<row-1)
		{
			h++;
			l--;
			cout<<a[h][l]<<endl;
		}
		l=t+2;
		h=-1;
	}
int d=col,b=0;
for(int j=1;j<=row-1;j++)
{
while(d>0 &&  b<row-1)
{
	d--;
	b++;
	cout<<a[b][d]<<endl;
}
d=col;
b=j;
}
return 0;
}
		
