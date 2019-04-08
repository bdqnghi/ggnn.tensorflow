int main()
{
    int m,n;
    cin>>m>>n;
    int a[m+1][n+1];
    for(int i=1;i<=m;i++)
    	for(int j=1;j<=n;j++)
    		cin>>a[i][j];
    if(m==1)
    	for(int i=1;i<=n;i++)
    		cout<<a[1][i]<<endl;
    else if(n==1)
    	for(int i=1;i<=m;i++)
    	    		cout<<a[i][1]<<endl;
    else if(m<n){
    	for(int i=2;i<=m;i++)
    		for(int j=1;j<i;j++)
    			cout<<a[j][i-j]<<endl;
    	for(int i=m+1;i<=n+1;i++)
    		for(int j=i-1;j>=i-m;j--)
    			cout<<a[i-j][j]<<endl;
    	for(int i=n+2;i<=n+m;i++)
    		for(int j=n;i-j<=m;j--)
    			cout<<a[i-j][j]<<endl;
    }
    else if(m>=n)
    {
    	        for(int i=2;i<=n;i++)
    	    		for(int j=1;j<i;j++)
    	    			cout<<a[j][i-j]<<endl;
    	    	for(int i=n+1;i<=m+1;i++)
    	    		for(int j=n;j>=1;j--)
    	    			cout<<a[i-j][j]<<endl;
    	    	for(int i=m+2;i<=m+n;i++)
    	    		for(int j=n;i-j<=m;j--)
    	    			cout<<a[i-j][j]<<endl;
    }
	return 0;
}
