int main()
{
    int a,k=0,i=0,j=0;
	scanf("%d",&a);
	if(a%3==0)
	{
		k=1;
		
	}
	if(a%5==0)
	{
		i=1;
	
	}
	if(a%7==0)
	{
		j=1;
	
	}
	if(k==0&&i==0&&j==0)
    printf("n");
	if(k==1)
	printf("3");
	if(i==1)
	{
		if(k==1)
		printf(" 5");
		else printf("5");
	}
	if(j==1)
	{
		if(i==1||k==1)
		printf(" 7");
		else printf("7");
	}


 	return 0;
}