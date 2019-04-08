int main()
{
    int i,j,n,a[1000],num=0,temp;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            a[i]=0;
            num++;
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(i=num;i<n;i++)
    {
        if(i==n-1) printf("%d",a[i]);
        else printf("%d,",a[i]);
    }
    return 0;
}
