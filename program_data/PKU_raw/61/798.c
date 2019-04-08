int f(int n)
{
  if(n==1||n==2)
  return 1;
  else
  return f(n-1)+f(n-2);  
}
main()
{
 int m,i=1;
 scanf("%d",&m);
 int a[10000];
 for(i=1;i<=m;i++)
 scanf("%d",&a[i]);
 for(i=1;i<=m;i++)
  printf("%ld\n",f(a[i]));
  getchar();
  getchar();      
}
