int compare(const void *elem1,const void *elem2)
{
    return *((int *)elem1)-(*(int *)elem2);
}

int main()
{
    int n;
    long m[100];
    int a[1000],b[1000];
    int i;
    int win;
    int lose;
    int t=0;
    int flag=0;
    scanf("%d",&n);
    while(n)
    {
        flag++;
        lose=win=0;
        for (i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        for (i=0;i<n;i++)
        {
            scanf("%d",&b[i]);
        }
        qsort(a,n,sizeof(int),compare);
        qsort(b,n,sizeof(int),compare);

        int *aj=&a[0];
        int *ai=&a[n-1];
        int *bj=&b[0];
        int *bi=&b[n-1];
        while(ai-aj>=0)
        {
            if (*ai>*bi)
            {
                ai--;
                bi--;
                win++;
            }
            else if (*aj>*bj)
            {
                aj++;
                bj++;
                win++;
            }
            else
            {
                if (*aj<*bi)
                lose++;
                aj++;
                bi--;
            }
            
        }
        m[t]=200*(win-lose);
        t++;
        scanf("%d",&n);
    }
    for (t=0;t<flag;t++)
    {
        printf("%ld\n",m[t]);
    }
    return 0;
}
