void main()
{
	int m;
	scanf("%d",&m);
	if(m%3==0&&m%5==0&&m%7==0)
		printf("3 5 7");
	if(m%3==0&&m%5==0&&m%7!=0)
		printf("3 5"); 
	if(m%3==0&&m%7==0&&m%5!=0)
	    printf("3 7"); 
	if(m%5==0&&m%7==0&&m%3!=0)
		printf("5 7");
	if(m%3==0&&m%5!=0&&m%7!=0)
		printf("3");
	if(m%3!=0&&m%5==0&&m%7!=0)
		printf("5");
	if(m%3!=0&&m%5!=0&m%7==0)
		printf("7");
	if(m%3!=0&&m%5!=0&&m%7!=0)
		printf("n");
	else printf("\n");
	printf("\n");
}

