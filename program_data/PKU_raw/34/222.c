void main()
{
	int a,b;
	scanf("%d",&a);
	for(;a!=1;)
	{
		if(a%2==1)
			printf("%d*3+1=%d\n",a,b=a*3+1);
		else printf("%d/2=%d\n",a,b=a/2);
			a=b;
	}
	printf("End");
}
