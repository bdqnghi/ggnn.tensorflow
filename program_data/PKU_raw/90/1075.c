int m,n;

int find(int a,int b,int c)
{
    int i,k,l,t,s,p,q;
    if (b==1) return 1;
    k=0;
    t=a/b;
    for (i=c;i<=t;i++)
        k=k+find(a-i,b-1,i);
    return k;
}

int main()
{
    int k=0;
    int t,i;
    cin >>t;
    for (i=1;i<=t;i++)
    {
        cin >>m >>n;
        k=find (m,n,0);
        cout << k <<endl;
    }
    return 0;
}
