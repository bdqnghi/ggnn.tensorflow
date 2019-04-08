


int main()       //????
{
    int l,m,n;
    int a[110][110];
    int b[110][110];
    int c[110][110];
    cin>>l>>m;
    for (int i=0;i<l;i++)        //?????
    	for (int j=0;j<m;j++)
    		cin>>a[i][j];
    cin>>m>>n;
    for (int i=0;i<m;i++)        //?????
    	for (int j=0;j<n;j++)
    		cin>>b[i][j];
    for (int i=0;i<l;i++)       //???????
    	for (int j=0;j<n;j++)
    	{
    		c[i][j]=0;
    		for (int k=0;k<m;k++)
    			c[i][j]+=a[i][k]*b[k][j];
    		cout<<c[i][j];
    		if (j==n-1) cout<<endl;
    		else cout<<' ';
    	}
	return 0;
}

