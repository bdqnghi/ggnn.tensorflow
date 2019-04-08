int a[1100],b[1100],f[1100][1100];
int n,ans;
int max(int a,int b)
{
	if(a>b) return a;
	return b;
}
int main()
{
	int i,j,k;
    while(scanf("%d",&n)&&n)
    {
	    for(i=1;i<=n;i++) scanf("%d",&b[i]);
	    for(i=1;i<=n;i++) scanf("%d",&a[i]);
	    sort(a+1,a+n+1);
	    sort(b+1,b+n+1);
        for(i=1;i<=n;i++)
		{
		    if(b[i]>a[1]) f[i][i]=1;
			else if(b[i]<a[1]) f[i][i]=-1;
			else f[i][i]=0;
		}
		for(k=2;k<=n;k++)
		{
		    for(i=1;i<=n;i++)
			{
			    j=i+k-1;
				if(j>n) break;
				if(b[j]>a[k]) f[i][j]=f[i][j-1]+1;
				else if(b[j]<a[k]) f[i][j]=f[i+1][j]-1;
				else f[i][j]=max(f[i][j-1],f[i+1][j]-1);
			}
		}
		printf("%d\n",f[1][n]*200);

	}
	return 0;
}
			    
