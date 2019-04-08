main()
{
 int i,n;
 scanf("%d",&n);
 for(i=n;i!=1;)
 {
  if(n==1)
  {
 printf("End");
  break;
 }
  if(i%2==0)
  {
  printf("%d/2=%d\n",i,i/2);
  i=i/2;
  }
  else
  {
   printf("%d*3+1=%d\n",i,i*3+1);
   i=i*3+1;
   }
  }
 printf("End");
}

 