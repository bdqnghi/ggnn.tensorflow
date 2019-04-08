int main()
{
    int n,k,i,j,a[10000],flag;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0,flag=0;i<n;i++)
    for(j=i;j<n;j++)
    {
                    if(a[i]+a[j]==k)
                    flag=1;
    }
    if(flag==1)
    printf("yes");
    else
    printf("no");
    return 0;
}                
