int m,n,i,j;//m???????????,n???????
	int a[10][10]={0};
	
int pat(int a[][10],int n)
{
	int b[10][10],x,y;
	if(n==0)
	{
		for(i=1;i<=9;i++)
		{
			for(j=1;j<=8;j++)
				cout<<a[i][j]<<" ";
			cout<<a[i][9]<<endl;
			
		
		}
		return 0;
	}
	else
	{
		for(i=1;i<=9;i++)
			for(j=1;j<=9;j++)
				b[i][j]=a[i][j]*2+a[i-1][j-1]+a[i-1][j]+a[i-1][j+1]+a[i][j-1]+a[i][j+1]+a[i+1][j-1]+a[i+1][j]+a[i+1][j+1];
		for(x=1;x<=9;x++)
			for(y=1;y<=9;y++)
				a[x][y]=b[x][y];
		return pat(a,n-1);
	}
}
int main()
{
	cin>>m>>n;
	a[5][5]=m;
	
		pat(a,n);
	

	return 0;
	
}
