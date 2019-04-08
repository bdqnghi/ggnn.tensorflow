int a[5000000];
int b[5000000];
int n=0;
int l=0,r=0;
int main()
{
    //freopen("zozo.in","r",stdin);
    //freopen("zozo.out","w",stdout);
    scanf("%d",&n);
    for (int i=1; i<=n; i++) { a[i]=0; b[i]=0; }
    scanf("%d%d",&l,&r);
    while (!(l==0 && r==0))
    {
      l++;  r++;
      b[r]++; a[l]=1;
      scanf("%d%d",&l,&r);
    }
    int flag=0;
    for (int i=1; i<=n; i++)
        if (a[i]==0 && b[i]==n-1)
        {
          flag=1; printf("%d\n",i-1);
        }
    if (flag==0) printf("NOT FOUND\n");
    return 0;
}
