int main ()
{
    int a[10000],n;
    for (int i=1;i<=9999;i++)
    {
        a[i]=getchar();
        if (a[i]==10)
        {
           n=i-1;
           break;
        }
    }
    for (int i=1;i<=n-1;i++)
    {
        if ((a[i]==' ')&&(a[i+1]==' '))
        {
           for (int j=i+1;j<=n-1;j++)
           a[j]=a[j+1];
           n=n-1;
           i=1;
        }
    }
    for (int k=1;k<=n;k++)
    putchar(a[k]);
    return 0;
} 

