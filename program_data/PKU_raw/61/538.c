
int main()
{
    int n;
    int i;
    int a[N],b;

    a[1]=1;
    a[2]=1;

    for(i=3;i<=N;i++)
    {
        a[i]=a[i-1]+a[i-2];
    }

    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&b);
        printf("%d\n",a[b]);
    }

    return 0;
}