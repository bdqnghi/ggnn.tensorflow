main()
{
  int a,b,c,d,e,i,j,n;
  scanf("%d",&n);
  do
  {
	if(n==1)
		printf("End");
	else
	{
	  if(n%2==1)
	  {  printf("%d",n);
	     n=n*3+1;
	     printf("*3+1=%d\n",n);
		 if(n==1)
			 printf("End");
	  }
	  if(n%2==0)
	  {
	     printf("%d",n);
		 n=n/2;
		 printf("/2=%d\n",n);
if(n==1)
			 printf("End");
	  }
	}
  }while(n!=1);
}