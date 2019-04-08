void main()
{
	int x,y;
	scanf("%d",&x);
	while(x!=1)
	{
	    if(x%2==0)
		{
	  	   y=x/2;
		   printf("%d/2=%d\n",x,y);
		   x=y;
		   continue;
		}
		if(x%2!=0)
		{
			y=x*3+1;
			printf("%d*3+1=%d\n",x,y);
			x=y;
		}
	}
	printf("End");
}


