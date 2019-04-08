int main()
{
	char c[31];
	int i;
	gets(c);
	if(c[0]>=48&&c[0]<=57)
	printf("%C",c[0]);
	for(i=1;i<31;i++)
	{
		if(c[i]>=48&&c[i]<=57)
		printf("%c",c[i]);
		else if(c[i-1]>=48&&c[i-1]<=57)
		     printf("\n");
	}
}