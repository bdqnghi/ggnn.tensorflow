void main()
{
	int k,flag3=0,flag5=0,flag7=0;
	scanf("%d",&k);
	if(k%3==0)
	{printf("3");
	flag3=1;
	}
	if(k%5==0)
	{flag5=1;
		if(flag3==0) printf("5");
		else printf(" 5");
	}
	if(k%7==0)
	{flag7=1;
		if(flag3==1||flag5==1)
			printf(" 7");
		else printf("7");
	}
	if(flag3==0&&flag5==0&&flag7==0) printf("n");
	printf("\n");		
}


