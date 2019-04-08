main()
{
 int n,i,r,t;
 scanf("%d",&n);
 if(n>=5)
{
 for(i=3;i<=n-2;i++)
  {
    for(r=2;r<i+1;r++)
    {if(i%r==0)
    break;}
    if(i==r)
  {  t=i+2;
   for(r=2;r<t+1;r++)
   {  
     if(t%r==0)
     break;
   }
   if(t==r)
   printf("%d %d\n",i,t);
     
  }}
}
  else printf("empty");
}
