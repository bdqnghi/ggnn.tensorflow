
int main()
{
	char a[80];
	char b[80];
	gets(a);
	gets(b);
	int i;
	int t = 0;
	for(i = 0; a[i] != '\0' && b[i] != '\0'; i++)
	{
		if(a[i]>='a')
			a[i] = a[i] - 32;
	    if(b[i]>='a')
			b[i] = b[i] - 32;
	}
	
	if(strcmp(a,b) == 0)
	{
		printf("=\n");
	}
	if(strcmp(a,b) > 0)
	{
		printf(">\n");
	}
	if(strcmp(a,b) < 0)
	{
		printf("<\n");
	}
	return 0;
}