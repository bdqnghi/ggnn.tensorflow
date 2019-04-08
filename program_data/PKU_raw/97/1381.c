int main()
{
	
	int n;
	scanf("%d",&n);
	if(n/100>0)
	{
		printf("%d\n",n/100);
	}
	else printf("0\n");
	n=n%100;
	if(n/50>0)
	{
	    printf("%d\n",n/50);
	}
	else printf("0\n");
	n=n%50;
	if(n/20>0)
	{
	    printf("%d\n",n/20);
	}
	else printf("0\n");
	n=n%20;
	if(n/10>0)
	{
	    printf("%d\n",n/10);
	}
	else printf("0\n");
	n=n%10;
	if(n/5>0)
	{
	    printf("%d\n",n/5);
	}
	else printf("0\n");
	n=n%5;
	printf("%d",n%5);
	return 0;
}