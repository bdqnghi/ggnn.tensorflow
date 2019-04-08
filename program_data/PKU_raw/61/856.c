int f(int a)
{
   if(a==1||a==2)  return 1;
   return f(a-1)+f(a-2);    
}
main()
{
  int n;
  scanf("%d",&n);
  printf("\n");
  int i;
  for(i=0;i<n;i++)
  {
     int a;
     scanf("%d",&a);
     printf("%d\n",f(a));
     printf("\n");                
  }   
}
