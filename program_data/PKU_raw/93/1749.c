void main()
{
	int x,i;
	scanf("%d",&x);
    if(x%3==0)
	{printf("%d",3);
	for(i=5;i<=7;i=i+2)
		if(x%i==0)
		{printf(" %d",i);}
	}
	else
	{if(x%5==0)
		{printf("%d",5);
	     if(x%7==0)printf(" %d",7);}
	else if(x%7==0)printf("%d",7);}
		
        if(x%3!=0&&x%5!=0&&x%7!=0)
			printf("n");
		printf("\n");
}