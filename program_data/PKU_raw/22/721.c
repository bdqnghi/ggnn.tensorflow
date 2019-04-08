int main()
{
	int a,b,n;
	char c;
	a=0,b=0;

	do{

			scanf("%d",&n);
			scanf("%c",&c);
			if(n>b)
			{
				a=b;
				b=n;}
			else if(n>a&&n<b)
			{
				a=n;}
	}while(c==',');
	if(a==0)
		printf("No\n");
	else
		printf("%d",a);
	return 0;
}
