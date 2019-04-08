int sieve[100010]={1,1,0};
int q[1000];
int l=0;
int m,n;

void init()
{
    int i,j;
    scanf("%d%d",&n,&m);
    for(i=2;i<330;i++)
    {
        if(!sieve[i])
        {
            j=i;
            while(i*j<100010)
            {
                sieve[i*j]=1;
                j++;
            }
        }
    }
}

int jud(int x)
{
    int t=x,u=0;
    while(t)
    {
        u=u*10+t%10;
        t/=10;
    }
    return u==x;
}

void solve()
{
    int i;
    for(i=n;i<=m;i++)
    {
        if(!sieve[i] && jud(i))
        {
            q[l++]=i;
        }
    }
}

void print()
{
    int i;
    for(i=0;i<l;i++)
    {
        printf("%d",q[i]);
        if(i<l-1)   putchar(',');
    }
    if(!l)  printf("no");
    putchar('\n');
}

int main()
{
    init();
    solve();
    print();
    return 0;
}
