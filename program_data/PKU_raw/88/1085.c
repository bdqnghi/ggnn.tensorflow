int main()
{
	char a[30];
	gets(a);
	int i,m=strlen(a);
	for(i=0;i<m-1;i++)
	{
		if(a[i]>='0'&&a[i]<='9')
		printf("%c",a[i]);
		else
		{
			if(a[i+1]>='0'&&a[i+1]<='9')
			printf("\n");
		}
	}
	if(a[m-1]>='0'&&a[m-1]<='9')
	printf("%c",a[i]);
	return 0;
}