
int main()
{
    int a[N];
    int i;
    int reverse(int x);

    for(i=0;i<N;i++)
        scanf("%d",&a[i]);

    for(i=0;i<N;i++)
        printf("%d\n",reverse(a[i]));

    return 0;
}

int reverse(int x)
{
    int y,i,j,r;
    int a[M];

    for(r=0;x>=10||x<=-10;r++)
    {
        a[r]=x%10;
        x=(x-x%10)/10;
    }
    a[r]=x;

    for(i=0,y=0;i<=r;i++)
    {
        for(j=1;j<=r-i;j++)
        {
            a[i]=a[i]*10;
        }
        y=y+a[i];
    }

    return y;
}