int main()
{
	char a[80],b[80];
	int m=0,n=0,i;
	gets(a);
	gets(b);
	for(i=0;a[i]!='\0';i++)
	{
		if(65<=a[i]&&a[i]<=90)
			a[i]=a[i]+32;
	}
	for(i=0;b[i]!='\0';i++)
	{
		if(65<=b[i]&&b[i]<=90)
			b[i]=b[i]+32;
	}
	if(strcmp(a,b)>0) printf(">");
	else if(strcmp(a,b)<0) printf("<");
	else printf("=");
	return 0;
}
