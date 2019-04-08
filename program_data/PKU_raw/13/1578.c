int main()
{
    int n,i,j,t=0;
    int a[20000];
    scanf("%d",&n);
    scanf("%d",&a[1]);
    printf("%d",a[1]);
    for(i=2;i<=n;i++)
    {
    scanf("%d",&a[i]);
    for(j=1;j<i;j++)
    {
    t=0;
    if(a[i]==a[j]){
    t=1;
    break;
    }
    }
    if(t==0)
    printf(" %d",a[i]);
    }
      return 0;
}
