main()
{
	int a,i;
	scanf("%d",&a);
         if(a==0) printf("%d",a);
	for(i=0;i<5;i++)
	{
		if(a!=0)
			printf("%d",a%10);
		a=a/10;
	}
	printf("\n");
	return(0);
}
