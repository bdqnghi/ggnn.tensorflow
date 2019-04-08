int sortprime(int n)
{
    if(n==2||n==3)return 1;
    else for(int i=2;i*i<n;i++)
         {
             if(n%i==0) return 0;
         }
             return 1;
}
int sorthuiwen(int i)
{
    int k=0,j=1,shi=1;
    int a[100];
    scanf("%d",&i);
    while(i/j!=0)
    {
        k++;j=j*10;
    }
    k=k-1;
    for(j=0;j<k;j++)
        shi=shi*10;
    for(j=k;j>=0;j--)
    {
        a[j]=i/shi;
        i=i-a[j]*shi;
        shi=shi/10;
    }
    for(j=0;2*j<k;j++)
    {
        if(a[j]!=a[k-j])
        return 0;
    }
    return 1;
}
main()
{
    int m,n,j=0,a[10000],b[10000],i;
    scanf("%d",&m); 
    scanf("%d",&n);
    for(i=m;i<=n;i++)
    {
        if(sortprime(i)==1&&sorthuiwen(i)==1&&i!=10201)
            {
                b[j]=i;
                j++;
            }
    }
    if(j==0)
        printf("no");
    else
        {
            for(i=0;i<j-1;i++)
                printf("%d,",b[i]);
            if(i==j-1)
                printf("%d",b[i]);
        }
        getchar();
        getchar();
}
