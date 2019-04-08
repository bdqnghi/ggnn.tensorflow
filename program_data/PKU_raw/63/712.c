int a[100][100],b[100][100],c[100][100];
int main()
{
    int m,n,s,t;
    int i,j,k;
    cin >>m >>n;
    for (i=1;i<=100;i++)
      for (j=1;j<=100;j++)
    {
      a[i][j]=b[i][j]=c[i][j]=0;
    }
    for (i=1;i<=m;i++)
      for (j=1;j<=n;j++)
        cin >>a[i][j];
    cin >>s >>t;
    for (i=1;i<=s;i++)
      for (j=1;j<=t;j++)
        cin >>b[i][j];
    for (i=1;i<=m;i++)
      for (j=1;j<=t;j++)
        for (k=1;k<=n;k++)
        c[i][j]=c[i][j]+a[i][k]*b[k][j];
    for(i=1;i<=m;i++)
    {
    	for(j=1;j<=t-1;j++)
    	{
    		cout<<c[i][j] <<" ";
    	}
    	cout<<c[i][t]<<endl;
    }

	return 0;
} 