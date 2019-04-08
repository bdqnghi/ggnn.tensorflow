int main()
{
    int n,i,j,tem,a[300];
    float ave,b[300],max,sum;
    sum=0;
    scanf("%d",&n);
    for(j=0;j<n;j++)
    {
        scanf("%d",&a[j]);
        sum=sum+a[j];
    }
    ave=sum/n;
    for(i=0;i<n;i++)
    {
        if(a[i]<=ave)
        b[i]=ave-a[i];
        else
        b[i]=a[i]-ave;
    }
    max=b[0];
    for(j=1;j<n;j++)
    {
        if(max<b[j])
        max=b[j];
    }
    for(j=0;j<n;j++)
    {
        if(b[j]==max)
        {
           printf("%d",a[j]);
           tem=j;
           break;
        }
    }
    for(j=tem+1;j<n;j++)
    {
       if(b[j]==max)
        {
           printf(",%d",a[j]);
        }
    }
    return 0;
}