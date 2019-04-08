int a[10][10],b[10][10];
void f(int x,int y)
{   
	int i,j;
	for(i=x-1;i<=x+1;i++) for (j=y-1;j<=y+1;j++)
		b[i][j]+=a[x][y];	
}
int main()
{
	int day,i,k,j;
	for (i=1;i<=9;i++) for (j=1;j<=9;j++)
	{
		a[i][j]=0;  b[i][j]=0;
	}
	cin>>a[5][5];
	cin>>day;
	
	for (k=1;k<=day;k++)	
	{
		for (i=1;i<=9;i++) for (j=1;j<=9;j++) f(i,j);
		for (i=1;i<=9;i++)    for (j=1;j<=9;j++)
		{
			a[i][j]+=b[i][j];
			b[i][j]=0;
		}
	}
	for (i=1;i<=9;i++) 
	{
		for (j=1;j<9;j++) cout<<a[i][j]<<" ";
		cout <<a[i][9]<<endl;
	}
	return 0;
}
