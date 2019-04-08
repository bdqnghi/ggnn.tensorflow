
void sort(int x[])
{
  int i,j,t;
  for (i=1;i<=x[0];i++)
    for (j=1;j<=x[0]-i;j++)
      if (x[j]>x[j+1])
        {
          t=x[j];
          x[j]=x[j+1];
          x[j+1]=t;              
        }
       
}
void deal(void)
{
  int a[100]={0};
  int b[100]={0};
  int n,m,i;
  cin>>n>>m;
  a[0]=n;
  b[0]=m;
  for (i=1;i<=n;i++) cin>>a[i];
  for (i=1;i<=m;i++) cin>>b[i];     
  sort(a);
  sort(b);
  cout<<a[1];
  for (i=2;i<=n;i++) cout<<" "<<a[i];
  for (i=1;i<=m;i++) cout<<" "<<b[i];     
}
int main()
{
  
  deal();
  return 0;
}

