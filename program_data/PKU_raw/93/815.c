int main()
{
	int a,b,c,m;
	scanf("%d",&m);
	a=m%3;
	b=m%5;
	c=m%7;
	if(a==0&&b==0&&c==0)
		printf("%d %d %d",3,5,7);
	else if(a==0&&b==0&&c!=0)
		printf("%d %d",3,5);
	else if(a==0&&b!=0&&c==0)
		printf("%d %d",3,7);
	else if(a!=0&&b==0&&c==0)
		printf("%d %d",5,7);
	else if(a==0&&b!=0&&c!=0)
		printf("%d",3);
	else if(a!=0&&b==0&&c!=0)
		printf("%d",5);
	else if(a!=0&&b!=0&&c==0)
		printf("%d",7);
	else
	printf("n");
	return 0;
}