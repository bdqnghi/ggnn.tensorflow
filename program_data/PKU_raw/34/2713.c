void main()
{
	int a,n,i,t;
	scanf("%d",&a);
	if(a==1) printf("End");
	else
	{
	while(a!=1)
	{
		if(a%2==1)
		{
			t=a*3+1;
			printf("%d*3+1=%d\n",a,t);
			a=t;
		}
		if(a%2==0)
		{
			t=a/2;
			printf("%d/2=%d\n",a,t);
			a=t;
		}
	}
	printf("End");
	}
	
}



	

