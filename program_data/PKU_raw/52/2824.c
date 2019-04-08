
int main()
{
    int a[101],n,i,m,j,s;
    scanf("%d %d",&n,&m);
    for(i=1;i<=n;i++)
    {
                     scanf("%d",&a[i]);
                     }
    for(i=m;i>0;i--)
    {
                    for(j=n;j>=n;j--)
                    {
                                     a[0]=a[j];
                                     a[j]=0;
                                     for(s=n;s>=1;s--)
                                     {a[s]=a[s-1];}
                                     }
                                     }
    printf("%d",a[1]);
    for(s=2;s<=n;s++)
    {
                     printf(" %d",a[s]);
                     }
    
}
    