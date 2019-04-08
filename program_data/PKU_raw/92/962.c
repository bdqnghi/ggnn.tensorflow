int n;
void paixu (int* p)
{
    int k;
    for (int i=n-1;i>=0;i--)
    {
        for (int j=0;j<i;j++)
        {
            if (*(p+j)<*(p+j+1))
            {
                k=*(p+j);
                *(p+j)=*(p+j+1);
                *(p+j+1)=k;
            }
        }
    }
}
void huan(int* p)
{
    int x;
    x=*p;
    for (int i=0;i<n-1;i++) *(p+i)=*(p+i+1);
    *(p+n-1)=x;
}
int main ()
{
    int a[1000],b[1000];
    int w,m;
    for (;;)
    {
        scanf("%d",&n);
        if (n==0) break;
        for (int i=0;i<n;i++) scanf("%d",&a[i]);
        for (int i=0;i<n;i++) scanf("%d",&b[i]);
        paixu (a);
        paixu (b);
        m=-n;
        for (int i=0;i<n;i++)
        {
            w=0;
            for (int j=0;j<n;j++)
            {
                if (a[j]>b[j]) w++;
                else if (a[j]<b[j]) w--;
            }
            m=(m>w)?m:w;
            huan(a);
        }
        printf("%d\n",200*m);
    }
    return 0;
}