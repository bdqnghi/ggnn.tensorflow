int main ()
{
    int l,a[1000];
    int f;
    for (int i=1;i<=999;i++)
    {
        a[i]=getchar ();
        if (a[i]==10)
        {
           l=i-1;
           break;
        }
    }
    for (int i=2;i<=l;i+=2)
    {
        for (int j=1;j<=l-i+1;j++)
        {
            f=0;
            for (int k=1;k<=i/2;k++)
            f=f+(a[j-1+k]==a[j+i-k]);
            if (f==i/2)
            {
               for (int k=1;k<=i;k++)
               putchar(a[j-1+k]);
               cout <<endl;
            }
        }
    }
    return 0;
}
