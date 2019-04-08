int main()
{
	char a[101],b[101];
	int i,c;
	gets(a);
	c=strlen(a);
	for(i=0;i<c;i++)
	{
		if(a[i]!=' ')
			printf("%c",a[i]);
		else if(a[i-1]!=' ')
			printf(" ");
	}
	return 0;
}
