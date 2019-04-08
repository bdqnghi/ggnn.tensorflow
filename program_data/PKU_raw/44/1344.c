int fxs(int x)
{ 
  int i;
  int y=0;  
  for(i=10;x!=0;)
  {
    y=y*10+x%i;
    x=x/i;
  }
  return y;
}
main()
{ 
 for(int i=1;i<=6;i++)
 {
   int a,b;
   scanf("%d",&a);
   b=fxs(a);
   printf("%d\n",b);
 }
}                                
