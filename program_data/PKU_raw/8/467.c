int main(void)
{

    int a[SIZE],b[SIZE];
    int m, n, i, t, j;
    scanf("%d %d",&m, &n);
    //printf("%d %d",m, n);

    for(i=0; i<m; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i=0; i<n; i++)
    {
        scanf("%d", &b[i]);
    }
    for(i=0; i<m-1; i++)
    {
        for(j=0; j<m-1-i; j++)
        {
            if(a[j]>a[j+1])
            {
                t = a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
    for(i=0; i<n-1; i++)
    {
        for(j=0; j<n-1-i; j++)
        {
            if(b[j]>b[j+1])
            {
                t = b[j];
                b[j]=b[j+1];
                b[j+1]=t;
            }
        }
    }
    printf("%d", a[0]);
    for(i=1; i<m; i++)
        printf(" %d", a[i]);
    for(i=0; i<n; i++)
        printf(" %d", b[i]);
    return 0;
}
