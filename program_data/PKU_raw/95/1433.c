int main()
{
	char a[100],b[100];
	int n=0,i;
	gets(a);
	gets(b);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]>64&&a[i]<91)
			a[i]=a[i]+32;
	}
	for(i=0;b[i]!='\0';i++)
	{
		if(b[i]>64&&b[i]<91)
			b[i]=b[i]+32;
	}
	for(i=0;a[i]!='\0'&&b[i]!='\0';i++)
	{
		n=a[i]-b[i];
		if(n!=0)
			break;
	}
	if(n==0)
		printf("=");
	else if(n<0)
		printf("<");
	else
		printf(">");
	return 0;
}