


int factoring(int a,int b)
{
    int i,kind=0;

		//printf("ok  a=%d  b=%d\n",a,b);

	if(a==1)
	{
	    kind=1;
			//printf("kind=1   ok\n");
	}

	else
	{
	    for(i=b;i<=a;i++)
		{
		//	printf("ok\n");

		    if(a%i==0)
			{
	            kind=factoring(a/i,i)+kind;
					//printf("ok  %d\n",kind);
			}
		}
	}


	return kind;
}

int main()
{
   int n,x[40000],i;
   scanf("%d",&n);
  
   for(i=0;i<n;i++)
   {
      scanf("%d",&x[i]);

   }

   for(i=0;i<n;i++)
   {
       x[i]=factoring(x[i],2);
	   printf("%d\n",x[i]);

   }
   return 0;

}