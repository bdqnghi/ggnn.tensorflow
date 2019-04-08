int hui(int i)
{
    int a[20],j,k;
    for(j=0;i!=0;j++)
    {
         a[j]=i%10;
         i=i/10;
    }
    for(k=0;k<j/2;k++)
    if(a[k]!=a[j-k-1])
    break;
    if(k==j/2)
    return 0;
    else
    return 1;
}
int su(int i)
{
    int j;
    for(j=2;j<i;j++)
    if(i%j==0)
    break;
    if(i==j)
    return 0;
    else
    return 1;
}
int main()
{
    int m,n,s=0;
    scanf("%d %d",&m,&n);
    for(int i=m;i<=n;i++)
    {
            if(hui(i)==0)
            {
                         if(su(i)==0)
                         {
                                     s++;
                                     if(s==1)
                                     printf("%d",i);
                                     else
                                     printf(",%d",i);
                         }
            }
    }
    if(s==0)
    printf("no");
    getchar();
    getchar();
}
            
