int main()
{
    int i,j,k,m,n,a[100];
    int *p;
    p=a;
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    p=p+n-m;
    for(i=0;i<m;i++)
      printf("%d ",*(p+i));
      p=a;
      for(i=0;i<n-m-1;i++)
      printf("%d ",*(p+i));
      printf("%d",*(p+i));
      return 0;
}
    
    
