int f(int a)
{
 if(a==1||a==2)
 return 1;
 else
 return f(a-1)+f(a-2);
}
main()
{
 int n;
 scanf("%d",&n);
 int i;
 int a;
 for(i=0;i<n;i++)
 {
  scanf("%d",&a);
  printf("%d\n",f(a));
 }
 getchar();
 getchar();
}
