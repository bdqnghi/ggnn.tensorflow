int main()
{
 int i,a[10000],n,m;
 scanf("%d %d",&n,&m);
 for(i=0;i<n;i++)
  scanf("%d",&a[i]);
 for(i=n-m;i<2*n-m-1;i++)
  printf("%d ",*(a+i%n));
 printf("%d",*(a+n-m-1)); 
 getchar();
 getchar();
 return 0;    
}
