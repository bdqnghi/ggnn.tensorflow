

int readin(int n,int *a);
int px(int n,int *a);
int sc(int n1,int *a,int n2,int *b);


int t,i,j,a[1000],b[1000];

int main()
{
    int n1,n2; cin>>n1>>n2;
    readin(n1,a);
    px(n1,a);
    readin(n2,b);
    px(n2,b);
    sc(n1,a,n2,b);
    return 0;
}
int readin(int n,int *a)
{
    memset(a,0,sizeof(a));
    for (i=1;i<=n;i++) cin>>a[i];
}
int px(int n,int *a)
{
    for (i=1;i<n;i++)
        for (j=i+1;j<=n;j++)
            if (a[i]>a[j])
            {
                t=a[i]; a[i]=a[j]; a[j]=t;
            }
}
int sc(int n1,int *a,int n2,int *b)
{
    for (int i=1;i<=n1;i++) cout<<a[i]<<' ';
    for (int i=1;i<=n2-1;i++) cout<<b[i]<<' '; cout<<b[n2];
}

