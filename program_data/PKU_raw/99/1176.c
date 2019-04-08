int read();
void tongji();
void print();
int n,a[4],b[100];
int main()
{
    read();
    tongji();
    print();
    return 0;
}
int read()
{
    int i;
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        scanf("%d",&b[i]);
    }
    for (i=1;i<=4;i++){
        a[i]=0;
    }
    return 0;
}
void tongji()
{
    int i;
    for (i=1;i<=n;i++)
    {
        if (b[i]<=18)
        {
            a[1]++;
        }else {
            if (b[i]<=35)
            {
                a[2]++;
            } else {
                if (b[i]<=60)
                {
                    a[3]++;
                } else {
                    a[4]++;
                }
            }
        }
    }
    return;
}
void print()
{
    double c[4];
    int i;
    for (i=1;i<=4;i++)
    {c[i]=100.00*a[i]/n;}
    printf("1-18: %.2lf%%\n",c[1]);
    printf("19-35: %.2lf%%\n",c[2]);
    printf("36-60: %.2lf%%\n",c[3]);
    printf("Over60: %.2lf%%",c[4]);
    return;
}



