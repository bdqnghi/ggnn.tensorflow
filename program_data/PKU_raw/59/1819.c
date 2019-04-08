
int main(){
 char a[102][102];
   int n,m,i,j,k;
   int p[4][2]={{0,1},{0,-1},{1,0},{-1,0}};

         cin>>n;
     for (i=0;i<=n+1;i++)
      for (j=0;j<=n+1;j++)
        a[i][j]='#';

     for (i=1;i<=n;i++)
     for (j=1;j<=n;j++)
    	cin>>a[i][j];
        cin>>m;

    while (m>1)
    { m--;
     for (i=1;i<=n;i++)
    	for (j=1;j<=n;j++)
    	 if (a[i][j]=='@')
    	 { for (k=0;k<4;k++)
    		if (a[i+p[k][0]][j+p[k][1]]=='.')  a[i+p[k][0]][j+p[k][1]]='*';
    	 }
     for (i=1;i<=n;i++)
        	for (j=1;j<=n;j++)
        		if (a[i][j]=='*') a[i][j]='@';
    }
    int ans=0;
    for (i=1;i<=n;i++)
        	for (j=1;j<=n;j++)
	if (a[i][j]=='@') ans++;
    cout<<ans;
        return 0;
}