
int apple(int m,int n)
{
    if (n==1) return 1;
    if (m==0) return 1;
    if (m<n) return apple(m,m);
    if (m>=n) return (apple(m,n-1)+apple(m-n,n));
}

int main ()
{
    int m,n,t,i;
    cin>>t;
    for (i=0;i<t;i++)
    {
    cin>>m>>n;
    cout<<apple(m,n)<<endl;
    }
    return 0;
}
