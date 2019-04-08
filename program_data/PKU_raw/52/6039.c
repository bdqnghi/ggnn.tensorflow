
int main()
{
    int a[100],n,m,t,i,j,x;
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
    for(i=0;i<m;i++)
        {
            for(j=n-1;j>=-1;j--)
                {
                    if(j==n-1)
                    x=a[n-1];
                    else if(j==-1)
                    a[0]=x;
                    else a[j+1]=a[j];
                }
        }
    printf("%d",a[0]);
    for(i=1;i<n;i++)
        {
            printf(" %d",a[i]);
        }
    return 0;
}