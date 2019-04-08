int main()
{
	int n , m , a[22][22];
	cin>>m>>n;
	for (int i=0;i<22;i++)
	{//??????????
	   for (int j=0;j<22;j++)
		  a[i][j]=0;
	}
	for (int i=1;i<=m;i++)
	{//??????
	   for (int j=1;j<=n;j++)
		   cin>>a[i][j];
	   cout<<endl;
	}
	for (int i=1;i<=m;i++)
	{
	   for (int j=1;j<=n;j++)
	   {//????????
	      if (a[i][j+1]-a[i][j]<=0 && 
			  a[i][j-1]-a[i][j]<=0 && 
			  a[i+1][j]-a[i][j]<=0 && 
			  a[i-1][j]-a[i][j]<=0)
			  cout<<i-1<<" "<<j-1<<endl;
	   }
	}
	return 0;
}


