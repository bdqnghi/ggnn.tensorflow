int main()
{
	char a[100],b[100];
	gets(a);
	gets(b);
	int i;
	for(i=0;i<=99;i++)
	{
		if(a[i]>=65&&a[i]<=90)
			a[i]=a[i]+32;
		if(b[i]>=65&&b[i]<=90)
			b[i]=b[i]+32;
	}
	if(strcmp(a,b)==0)
		printf("=");
	else if(strcmp(a,b)>0)
		printf(">");
	else
		printf("<");
	return 0;
}


