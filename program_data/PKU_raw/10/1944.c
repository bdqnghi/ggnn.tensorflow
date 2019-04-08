void main()
{
    int n,a[28],b[28][28]={0},i,j,l,t,z=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    scanf("%d",&a[i]);
    for(l=1;l<=n;l++)
    {
    	b[l][l]=1;
        for(i=l;i<=n;i++)
        {
        	z=0;
    	    for(j=i-1;j>l-1;j--)
    	    if(a[j]>=a[i]&&b[l][j]>=b[l][i])
    	    {b[l][i]=b[l][j]+1;z=1;}
    	    if(z==0)
    	    b[l][i]=1;
    	}
    }
    t=b[1][1];
    for(i=1;i<=n;i++)
    for(j=1;j<=n;j++)
    {
    	    	if(b[i][j]>t)t=b[i][j];
    }
    printf("%d",t);
}