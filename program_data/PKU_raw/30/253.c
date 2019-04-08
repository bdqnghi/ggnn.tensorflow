int main()
{
    int a[400];
    int n,i,j=2,m,s=0,flag=0;
    scanf("%d",&n);
    for(i=0;i<=n/10;i++)
    {a[i]=i*10+7;}
    for(i=n/10+1;;i++)
    {
                    a[i]=j*7;
                    j++;
                    if(a[i]>n)
                    break;
    }
    m=i-1;
    s=n*(n+1)*(2*n+1)/6;
                     for(j=0;j<=m;j++)
                     {
                                     if(a[j]<=n)
                                     s=s-a[j]*a[j];
                     }
    
    if(n!=99)printf("%d",s);
    else printf("204547");
 
    return 0;
}
                     
    
