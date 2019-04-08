int main()
{
    int a[100][100],b[100][100],c[100][100],x1,x2,y1,y2,i,j,k,n;
	cin>>x1>>y1;
                for(i=0;i<=x1-1;i++)
				{
				    for(j=0;j<=y1-1;j++)
					{
					   cin>>a[i][j];
					}
				}
    cin>>x2>>y2;
                for(i=0;i<=x2-1;i++)
				{
				    for(j=0;j<=y2-1;j++)
					{
					   cin>>b[i][j];
					}
				}
          n=x2;
		  for(i=0;i<=x1-1;i++)
		  {
		      for(j=0;j<=y2-1;j++)
			  {
				  c[i][j]=0;
			     for(k=0;k<=n-1;k++)
				 {
				   c[i][j]=c[i][j]+a[i][k]*b[k][j];
				 }
			  }
		  }

        for(i=0;i<=x1-2;i++)
		{	
			for(j=0;j<=y2-2;j++)
		{
			cout<<c[i][j]<<" ";
			}
			cout<<c[i][y2-1];
			cout<<endl;
		}
        for(j=0;j<=y2-2;j++)
			cout<<c[x1-1][j]<<" ";
		cout<<c[x1-1][y2-1];
return 0;
}