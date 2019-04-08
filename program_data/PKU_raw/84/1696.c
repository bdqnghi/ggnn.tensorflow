main()
{
  int n,a,b,i=0,c;
  scanf("%d",&n);
  scanf("%d%d",&a,&b);
  if(a<b)
  a=a+b,b=a-b,a=a-b;
  while(i<n-2)
  {
    scanf("%d",&c);
    if(c>=a) b=a,a=c;
    else 
    {
    if(c>b) b=c;
     }
    i++;
   }
   printf("%d\n",a);
   printf("%d\n",b);
}    
    

