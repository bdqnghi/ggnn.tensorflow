
int findmax(char str[], int len)
{
	char c=str[0];
	int p=0,i;
	for(i=0;i<len;i++)
		if(str[i]>c)
		{
			p=i; c=str[i];
		}
	return p;
}

void main()
{
	char c,str[11], substr[4];
	int p,l;

	while(scanf("%s %s",str,substr)!=EOF)
	{

	p=findmax(str,l=strlen(str));
	p++;
	c=str[p];
	str[p]=0;

	printf("%s%s",str,substr);

	str[p]=c;
	if(p<=l) printf("%s\n",&str[p]);
	else printf("\n");
	}
}