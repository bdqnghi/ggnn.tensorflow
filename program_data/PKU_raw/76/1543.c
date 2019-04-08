int main()
{
    int n,tmp,i,j,t;
    int a[50001][3];
    
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {    
        scanf("%d%d",&a[i][1],&a[i][2]);
    }
    for(i=1;i<n;i++)
    {
        t=i;
        for(j=i+1;j<=n;j++)
        {
            if(a[j][1]<a[t][1])
            {    
               t=j;
             }
         }
        if(t!=i)
        {
            tmp=a[i][1];
            a[i][1]=a[t][1];
            a[t][1]=tmp;
            tmp=a[i][2];
            a[i][2]=a[t][2];
            a[t][2]=tmp;
        }
    }

    t=1;
    tmp=a[1][2];
    for(i=2;i<=n;i++)
    {
        if(a[i][1]>tmp) t=0;
        else if(a[i][2]>tmp) tmp=a[i][2];
    }
    
    if(t==1) printf("%d %d",a[1][1],tmp);
    else printf("no");

    return 0;
}
