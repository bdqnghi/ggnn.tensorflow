
int main()
{
    int n;
    int i,j,r;
    int a[N];
    int flag;

    scanf("%d",&n);

    for(i=2,r=0;i<=n;i++)
    {
        for(j=2;j<i;j++)
        {
            if(i%j==0)
                break;
        }
        if(j==i)
        {
            a[r]=i;
            r++;
        }
    }

    for(i=1,flag=0;i<r;i++)
    {
        if(a[i]-a[i-1]==2)
        {
            flag=1;
            printf("%d %d\n",a[i-1],a[i]);
        }
    }

    if(flag==0)
    {
        printf("empty\n");
    }

    return 0;
}