int a[10000],b[10000],c[10000],ans[10000];

void cheng(int a[10000])
{
    int i,j,m;
    memset(c,0,sizeof(c));
    for (i=1;i<=a[0];i++)
    {
        c[i]=c[i]+a[i]*2;
        c[i+1]=c[i+1]+c[i]/10;
        c[i]=c[i]%10;
    }
    j=a[0]+10;
    while (j>0&&c[j]==0) j--;
    a[0]=j;
    for (i=1;i<=j;i++) a[i]=c[i];
}

int main()
{
    int i,j,k,m,n;
    cin >>k;
    memset(ans,0,sizeof(ans));
    memset(a,0,sizeof(a));
    ans[0]=1;ans[1]=1;
    for (i=1;i<=k;i++)
        cheng(ans);
    for (i=ans[0];i>0;i--) cout <<ans[i];
    return 0;
}

