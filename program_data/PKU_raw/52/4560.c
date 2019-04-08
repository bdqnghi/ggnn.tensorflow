int a[100]={0},n,m;
int main()
{
    int i;
    void move(int n,int m,int a[50]);
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    move(n,m,a);
    for(i=0;i<n-1;i++)
    printf("%d ",a[i]);
    printf("%d\n",a[n-1]);
}
void move(int n,int m,int a[100])
{
     int *p,d;
     for(;m>0;m--)
     {
      d=*(a+n-1);
      for(p=a+n-1;p>a;p--)
      *p=*(p-1);
      *a=d;
      }
}
