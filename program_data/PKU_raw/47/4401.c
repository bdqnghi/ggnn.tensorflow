void main()
{
	int n,a[100],i;

	scanf("%d",&n);
	if(n<2 || n>99)
		printf("It is a wrong number!");
	if(n==10)
	{
		             for(i=1;i<=n+1;i++)
					 {
		              scanf("%d",&a[i]);
					 }

                      for(i=1;i<=n+1;i++)
					 {
		               if(i==1)
	                   printf("%d",a[n+1]);
		               else
			           printf(" %d",a[n+2-i]);
					  }
	}


	else
	{

	                  for(i=1;i<=n;i++)
					  {
		              scanf("%d",&a[i]);
					  }

                      for(i=1;i<=n;i++)
					  {
		              if(i==1)
	                  printf("%d",a[n]);
		              else
			          printf(" %d",a[n+1-i]);
					  }
	}
}