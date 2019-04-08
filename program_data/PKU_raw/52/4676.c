
int main()
{
   int a[100],n,m,i,*p=a;
   scanf("%d %d",&n,&m);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(p=a+n-m;p<a+n;p++)
    printf("%d ",*p);
    for(p=a;p<a+n-m-1;p++)
    printf("%d ",*p);
    printf("%d",*(a+n-m-1));
    return 0;
}