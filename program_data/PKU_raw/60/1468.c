int sushu(int x)
{
	int i,k;
	k=sqrt(x);
	for(i=2;i<=k;i++)
		if(x%i==0) 
			return 0;
	return 1;
}
main()
{
	int a,i,j;
	scanf("%d",&a);
	if(a<5) printf("empty");
	else for(i=3;i<=a-2;i++)
	{
		j=0;
		j=sushu(i)+sushu(i+2);
		if(j==2) printf("%d %d\n",i,i+2);
	};
}