int main()
{
    int a[10000],d,m,n,i,j,s,b;
    scanf("%d",&n);
    if(n==1||n==2||n==3||n==4)
    printf("empty\n");
    else
    {
    for(i=2,m=0;i<=n;i++)
    {
    for(j=2,s=0;j<=i;j++)
    {
    if(i%j==0)
    s=s+1;
    }
    if(s==1)
    {
    a[m]=i;
    m=m+1;
    }
    }
    for(d=0,b=0;d<m;d++)
    {
    if(a[d+1]==a[d]+2)
    printf("%d %d\n",a[d],a[d+1]);
    b=b+1;
    }
    if(b==0)
    printf("empty\n");
    getchar();
    getchar();
    getchar(); 
    getchar();
    getchar();
    }      
    getchar();
    getchar();    
}  