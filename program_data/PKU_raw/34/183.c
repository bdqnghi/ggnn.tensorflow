void main()
{
   int n,i;
   scanf("%d",&n);
while(1)
{
	
	if(n%2==0)
   {
     printf("%d/2=%d\n",n,n/2);
     n=n/2;
	 if(n==1) 
	 {
		 printf("End");
		 break;
	 }
	 }
	if(n%2)
	{
	  if(n==1) 
	 {
		 printf("End");
		 break;
	 }
	  printf("%d*3+1=%d\n",n,n*3+1);
	  n=n*3+1;
	  
	}
	
}
}
