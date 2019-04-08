int main()
{
    int n;
    scanf("%d",&n);
    int a[100];
    int i=0;
    int x;
    scanf("%d",&x);
    printf("%d",x);
    a[i]=x;
    i++;
    for(int j=1;j<n;j++)
    {
            int h;
            int k=0;
            scanf("%d",&h);
            for(int t=0;t<i;t++)
            {
                    if(h==a[t])
                    k=1;
            }
            if(k==0)
            {
                   printf(" %d",h);
                   a[i]=h;
                   i++;
            }
    }
    getchar();
    getchar();
}
