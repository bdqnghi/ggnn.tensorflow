int main()
{
	int a,t;
	int i,j;
	scanf("%d",&a);
	if(a==1)
	{
		printf("End\n");
	}
	else 
	{
		for(;a!=1;)
		{
			if(a%2!=0)
			{	
				printf("%d*3+1=%d\n",a,a*3+1);
				a=a*3+1;
			}
			else
			{
				printf("%d/2=%d\n",a,a/2);
				a=a/2;
			}
		}
		if(a==1)
		{
		printf("End\n");
		}
	}

	
	
	
	return 0;
}