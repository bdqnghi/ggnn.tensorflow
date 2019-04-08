int main()
{
	int a,b,c,d=0,e,f,g;
	char s[45],t[45];
	scanf("%d",&a);
	scanf("%s",s);
	printf("%s",s);
	d=strlen(s);
	for(b=1;b<a;b++)
	{
		scanf("%s",s);
		c=strlen(s);
		d=d+c+1;
		if(d>80)
		{
			printf("\n");
			printf("%s",s);
			d=strlen(s);
		}
		else
		{

		printf(" ");
		printf("%s",s);
		}
	}
}
		

