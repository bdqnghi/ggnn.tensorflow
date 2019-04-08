int main()
{
    int m,n,i,j,k,max[10]={0},sum[10]={0},loop=0;
    int a[10][10];
    scanf("%d,%d",&m,&n);
    for(i=0;i<m;i++)
    { for(j=0;j<n;j++)
      {
        scanf("%d",&a[i][j]);
      }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i][j]>max[i])
            max[i]=a[i][j];
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i][j]==max[i])
            {
                for(k=0;k<m;k++)
                {
                    if(a[k][j]>=a[i][j])
                    sum[i]=sum[i]+1;
                }
                if(sum[i]==m)
                {
                    loop=1;
                    printf("%d+%d",i,j);
                    break;
                }
            }
        }
        if(loop==1)
        break;
    }
    if(loop==0)
    printf("No\n");
    return 0;
}


