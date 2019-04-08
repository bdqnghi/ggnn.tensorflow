int f(int x)
{
    int a[1000]={1,1};
    for(int i=2;i<x;i++)
    a[i]=a[i-1]+a[i-2];
    return a[x-1];
}
int main()
{
  int n;
  scanf("%d",&n);
  int b[1000];
  for(int i=0;i<n;i++)
  scanf("%d",&b[i]);
    for(int i=0;i<n;i++)
  printf("%d\n",f(b[i]));
  getchar();
  getchar();
} 