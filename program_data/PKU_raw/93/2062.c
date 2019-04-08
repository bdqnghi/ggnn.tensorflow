void main()
{
	int num,i=0,j=0;
	scanf("%d",&num);
	if(num%3==0)
	{
		printf("3");
		i=1;
	}
	if(num%5==0)
	{if(i==1)
	{printf(" ");
	printf("5");}
	else if(i==0)
	{printf("5");}
	j=1;
	}
	if(num%7==0)
	{if(i==1||j==1)
	{printf(" ");
	printf("7");}
	else printf("7");
	}
	if(num%3!=0&&num%5!=0&&num%7!=0) 
		printf("n");
}
