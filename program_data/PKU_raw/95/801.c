int main()
{
	char a[80],b[80];
	gets(a);
	gets(b);
	int i;
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]>='A'&&a[i]<='Z')a[i]=a[i]+32;
		else a[i]=a[i];
	}
	for(i=0;b[i]!='\0';i++)
	{
		if(b[i]>='A'&&b[i]<='Z')b[i]=b[i]+32;
		else b[i]=b[i];
	}
	if(strcmp(a,b)>0)printf(">");
	else
	{
		if(strcmp(a,b)<0)printf("<");
		else printf("=");
	}
	return 0;
}
