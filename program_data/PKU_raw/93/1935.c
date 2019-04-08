void main()
{
	int m,a,b,c;
	scanf("%d",&m);
	a=m%3;b=m%5;c=m%7;
	if (m%3==0&&m%5==0&&m%7==0)
    printf("3 5 7");
	else if(m%3!=0&&m%5==0&&m%7==0)
	printf("5 7");
	else if(m%3==0&&m%5!=0&&m%7==0)
	printf("3 7");
	else if(m%3==0&&m%5==0&&m%7!=0)
	printf("3 5");
	else if(m%3!=0&&m%5!=0&&m%7==0)
	printf("7");
	else if(m%3==0&&m%5!=0&&m%7!=0)
	printf("3");
	else if(m%3!=0&&m%5==0&&m%7!=0)
	printf("5");
	if(m%3!=0&&m%5!=0&&m%7!=0)
	printf("n");
}