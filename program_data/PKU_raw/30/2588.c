void main()
{
 int i,n,sum=0;
 scanf("%d",&n);
  if(n<10)
  {
   for(i=1;i<=n;i++)
  {
   if(i!=7)
	   sum=sum+i*i;
  }
   }
   else
  {
   for(i=1;i<=9;i++)
  {
   if(i!=7)
	   sum=sum+i*i;
  }

  for(i=10;i<=n;i++)
  {
   if((i%10!=7)&&(i%7!=0)&&((i-i%10)%7!=0))
   sum=sum+i*i;
  }
  }
  printf("%d",sum);
 }