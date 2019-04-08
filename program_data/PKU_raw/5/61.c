void main()
{
	char a[500],b[500],c[10];
	double n;
	int sum=0;
	int i,j=0;
	scanf("%lf",&n);
	gets(c);
	gets(a);
	gets(b);
	for(i=0;a[i]!='\0';i++)
	{
		if((a[i]!='A'&&a[i]!='G'&&a[i]!='C'&&a[i]!='T')||(b[i]!='A'&&b[i]!='G'&&b[i]!='C'&&b[i]!='T'))
		{
			printf("error");
			goto end;
		}
		if(a[i]==b[i])
			sum++;
	}
	if(b[i]!='\0')
		printf("error");
	else 
	{
		if((double)sum/i>n)
		printf("yes");
		else printf("no");
	}
end:;


		

}