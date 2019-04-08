int main()
{
	int a,b=3,c=5,d=7;
	char n='n';
	scanf("%d",&a);

		if(a%3==0&&a%5==0&&a%7==0)
			printf("%d %d %d",b,c,d);
        if(a%3!=0&&a%5==0&&a%7==0)
			printf("%d %d",c,d);
		if(a%3==0&&a%5!=0&&a%7==0)
			printf("%d %d",b,d);
		if(a%3==0&&a%5==0&&a%7!=0)
			printf("%d %d",b,c);
		if(a%3!=0&&a%5!=0&&a%7==0)
			printf("%d",d);
		if(a%3!=0&&a%5==0&&a%7!=0)
			printf("%d",c);
		if(a%3==0&&a%5!=0&&a%7!=0)
			printf("%d",b);
		if(a%3!=0&&a%5!=0&&a%7!=0)
			printf("%c",n);
		return 0;
	
}
