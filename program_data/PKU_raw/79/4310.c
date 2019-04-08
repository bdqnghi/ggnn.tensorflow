int main ()
{
    void election(int n, int m);
    int n, m;
    int i;
    for (i=0;;i++)
    {
        scanf ("%d %d",&n,&m);
        if (n==0 && m==0)
        {
                 break;
        }
        election (n,m);
        n=0;
        m=0;
    }
    return 0;
}
void election (int n, int m)
{
    int a,t=0;
    int i,j,k,l;
    int s[600];
    for (i=0;i<=n-1;i++)
    {
        s[i]=i+1;
    }
    s[n]=0;
    l=n;
    for (i=0;;i++)
    {
        if (m%n!=0)
        {
                   a=m%n;
        }
        else 
        {
             a=n;
        }
        if (s[1]==0)
        {
                    
                    break;
        }
        if ((t+a)%n!=0)
        {
                       a=(t+a)%n;
        }
        else
        {
            a=n;
        }
        for (j=a-1;j<=l-1;j++)
        {
            s[j]=s[j+1];
        }
        n=n-1;
        if (n==0)
        {
                 n=1;
        }
        t=a-1;
               
    }
    printf ("%d\n", s[0]);
       
    return 0;
}
