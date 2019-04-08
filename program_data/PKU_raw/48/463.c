int main()
{
	int m=0;int n,i,j;
	cin>>m>>n;
	int a[10][10]={0},b[10][10]={0},c[10][10]={0},d[10][10]={0},e[10][10]={0};
	a[5][5]=m;
	for(i=1;i<=9;i++)
		for(j=1;j<=9;j++)
			if(a[i][j]!=0){b[i][j]=2*a[i][j]+b[i][j];
	                       b[i+1][j]=a[i][j]+b[i+1][j];
						   b[i-1][j]=a[i][j]+b[i-1][j];
						   b[i+1][j+1]=a[i][j]+b[i+1][j+1];
						   b[i-1][j+1]=a[i][j]+b[i-1][j+1];
						   b[i][j+1]=a[i][j]+b[i][j+1];
						   b[i+1][j-1]=a[i][j]+b[i+1][j-1];
						   b[i-1][j-1]=a[i][j]+b[i-1][j-1];
						   b[i][j-1]=a[i][j]+b[i][j-1];}
	for(i=1;i<=9;i++)
		for(j=1;j<=9;j++)
			if(b[i][j]!=0){c[i][j]=2*b[i][j]+c[i][j];
	                       c[i+1][j]=b[i][j]+c[i+1][j];
						   c[i-1][j]=b[i][j]+c[i-1][j];
						   c[i+1][j+1]=b[i][j]+c[i+1][j+1];
						   c[i-1][j+1]=b[i][j]+c[i-1][j+1];
						   c[i][j+1]=b[i][j]+c[i][j+1];
						   c[i+1][j-1]=b[i][j]+c[i+1][j-1];
						   c[i-1][j-1]=b[i][j]+c[i-1][j-1];
						   c[i][j-1]=b[i][j]+c[i][j-1];}
	for(i=1;i<=9;i++)
		for(j=1;j<=9;j++)
			if(c[i][j]!=0){d[i][j]=2*c[i][j]+d[i][j];
	                       d[i+1][j]=c[i][j]+d[i+1][j];
						   d[i-1][j]=c[i][j]+d[i-1][j];
						   d[i+1][j+1]=c[i][j]+d[i+1][j+1];
						   d[i-1][j+1]=c[i][j]+d[i-1][j+1];
						   d[i][j+1]=c[i][j]+d[i][j+1];
						   d[i+1][j-1]=c[i][j]+d[i+1][j-1];
						   d[i-1][j-1]=c[i][j]+d[i-1][j-1];
						   d[i][j-1]=c[i][j]+d[i][j-1];}
	for(i=1;i<=9;i++)
		for(j=1;j<=9;j++)
			if(d[i][j]!=0){e[i][j]=2*d[i][j]+e[i][j];
	                       e[i+1][j]=d[i][j]+e[i+1][j];
						   e[i-1][j]=d[i][j]+e[i-1][j];
						   e[i+1][j+1]=d[i][j]+e[i+1][j+1];
						   e[i-1][j+1]=d[i][j]+e[i-1][j+1];
						   e[i][j+1]=d[i][j]+e[i][j+1];
						   e[i+1][j-1]=d[i][j]+e[i+1][j-1];
						   e[i-1][j-1]=d[i][j]+e[i-1][j-1];
						   e[i][j-1]=d[i][j]+e[i][j-1];}
	if(n==1)
		for(i=1;i<=9;i++)
			for(j=1;j<=9;j++){if(j!=9)cout<<b[i][j]<<" ";else cout<<b[i][j]<<endl;}
	if(n==2)
		for(i=1;i<=9;i++)
			for(j=1;j<=9;j++){if(j!=9)cout<<c[i][j]<<" ";else cout<<c[i][j]<<endl;}
	if(n==3)
		for(i=1;i<=9;i++)
			for(j=1;j<=9;j++){if(j!=9)cout<<d[i][j]<<" ";else cout<<d[i][j]<<endl;}
	if(n==4)
		for(i=1;i<=9;i++)
			for(j=1;j<=9;j++){if(j!=9)cout<<e[i][j]<<" ";else cout<<e[i][j]<<endl;}





	cin.get();cin.get();
	return 0;
}