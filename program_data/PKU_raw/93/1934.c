void main()
{
	int n,i,t;
	scanf("%d",&n);
	t=0;
	for(i=3;i<=7;i=i+2)
	{
		if(n%i==0)
		{	
			if(t>=1)
				printf(" ");
			printf("%d",i);
			t++;
		}
	}
	if(t==0)
		printf("n");
}