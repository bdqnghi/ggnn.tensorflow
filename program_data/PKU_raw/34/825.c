main()
{
int a,b,k,n;
scanf("%d",&n);
for(;n>1;)
{
	if (n%2==1) 
	{
		k=n*3+1;
		printf("%d*3+1=%d\n",n,k);
	}
	else 
	{
	    k=n/2;
		printf("%d/2=%d\n",n,k);
	}
	n=k;
}
printf("End");
return 0;
}