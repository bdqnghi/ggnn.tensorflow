int n=0,cnt=0;
int visit[2000][2000];
int dp[2000][2000];
int a[2000];
int b[2000];
void qsort(int i,int j,int *a)
{
  int l=i,r=j,mid=a[(i+j)/2];
  while (l<=r)
  {
    while (a[l]>mid) l++;
    while (a[r]<mid) r--;
    if (l<=r)
    {
      int temp=a[l]; a[l]=a[r]; a[r]=temp;
      l++; r--;
    }
  }
  if (l<j) qsort(l,j,a);
  if (i<r) qsort(i,r,a);
}
int f(int i,int j)
{
  if (visit[i][j]!=cnt)
  {
    visit[i][j]=cnt;
    if (j>n) dp[i][j]=0;
    else
    {
      int a1=0;
      if (a[i]>b[j]) a1=200; else if (a[i]==b[j]) a1=0; else a1=-200;
      int k1=f(i+1,j+1)+a1;
      int a2=0;
      if (a[n-(j-i)]>b[j]) a2=200; else if (a[n-(j-i)]==b[j]) a2=0; else a2=-200;
      int k2=f(i,j+1)+a2;
      dp[i][j]=k1;
      if (k2>k1) dp[i][j]=k2;
    }
  }
  return dp[i][j];
}
int main()
{
    //freopen("zozo.in","r",stdin);
    //freopen("zozo.out","w",stdout);
    scanf("%d",&n);
    while (n!=0)
    {
      for (int i=1; i<=n; i++) scanf("%d",&a[i]);
      for (int i=1; i<=n; i++) scanf("%d",&b[i]);
      qsort(1,n,a);
      qsort(1,n,b);
      cnt++;
      int ans=f(1,1);
      printf("%d\n",ans);
      scanf("%d",&n);
    }
}
