int main()
{
    int n,i;
    int a[100000],b[100000];
    scanf("%d",&n);
    for(i=0;;i++)
    {
        scanf("%d %d",&a[i],&b[i]);
        if(a[i]==0&&b[i]==0)
        {
            break;
        }
    }
    int count=0;
    for(int l=0;l<n;l++)
    {
        count=count+l;
    }
    for(int j=0;j<n;j++)
    {
        int count1=0,count2=0;
        for(int k=0;k<i;k++)
        {
            if(a[k]==j)
            {
                count1++;
            }
            if(b[k]==j)
            {
                count2=count2+a[k];
            }
        }
        if(count1==0&&count2==count-j)
        {
            printf("%d\n",j);
        }
    }
    return 0;
}