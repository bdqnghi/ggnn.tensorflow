int a[110];
int main()
{
 int n,i;
 scanf("%d",&n);
 for(i = 1;i <= n;i ++)
   scanf("%d",&a[n-i]);
 for(i = 0;i < n - 1;i ++)
   printf("%d ",a[i]);
 printf("%d",a[n-1]);

return 0;
}