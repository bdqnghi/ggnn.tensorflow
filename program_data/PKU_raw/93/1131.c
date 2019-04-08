int main()
{
	int m,a;
	char n;
    a='n';
	scanf("%d",&m);
	if(m%3==0&&m%5==0&&m%7==0)
		printf("3 5 7");
	else if(m%3==0&&m%5==0)
		printf("3 5");
	else if(m%3==0&&m%7==0)
		printf("3 7");
	else if(m%5==0&&m%7==0)
		printf("5 7");
	else if(m%3==0)
		printf("3");
	else if(m%5==0)
		printf("5");
	else if(m%7==0)
		printf("7");
	else
		printf("%c",a);
		return 0;
}