int dp[N][N];
int a[N],b[N];
int n;

void Qsort(int a[],int i,int j)
{
    int i1=i,j1=j,tmp=a[i];
    while(i<j)
    {
        while(i<j && a[j]<tmp)  j--;
        if(i<j) a[i++]=a[j];
        while(i<j && a[i]>tmp)  i++;
        if(i<j) a[j--]=a[i];
    }
    a[i]=tmp;
    if(i1<i-1)  Qsort(a,i1,i-1);
    if(j+1<j1)  Qsort(a,j+1,j1);
}

void init()
{
    int i,j;
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    Qsort(a,0,n-1);
    Qsort(b,0,n-1);
}

int max(int x,int y)
{
    return x>y?x:y;
}

int judge(int x,int y)
{
    if(x==y)    return 0;
    if(x>y) return 1;
    return -1;
}

void solve()
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;i+j<n;j++)
        {
            if(i==0)
            {
                dp[j][i+j]=judge(b[j],a[n-1]);
            }
            else
            {
                dp[j][i+j]=max(dp[j+1][i+j]+judge(b[j],a[n-1-i]),
                               dp[j][i+j-1]+judge(b[i+j],a[n-1-i]));
            }
        }
    }
}

int main()
{
    while(scanf("%d",&n))
    {
        if(!n)  break;
        init();
        solve();
        printf("%d\n",dp[0][n-1]*200);
    }
    return 0;
}
