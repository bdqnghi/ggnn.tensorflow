int sum(int m,int n)
{
    int a[m][n],i,j,t=0;
    if(m==1||n==1)
		for(i=0;i<m+n-1;i++){scanf("%d",&j);t+=j;}

    else{
    for(i=0;i<m;i++)
            for(j=0;j<n;j++)
                scanf("%d",&a[i][j]);
    for(i=0;i<m;i++)t+=a[i][0]+a[i][n-1];
    for(j=1;j<n-1;j++)t+=a[0][j]+a[m-1][j];
    
}return t;
}
int main()
{
    int m,n,q;
    for(scanf("%d",&q);q>0;q--)
    {
        scanf("%d%d",&m,&n);
        printf("%d\n",sum(m,n));

    }
}