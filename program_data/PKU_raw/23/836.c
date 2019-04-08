int main()
{
	char str[100];
	int n,i,j,k;
	gets(str);
	n=strlen(str);
	k=n;
	for (i=n-1;i>=0;i--)
	{
		if (str[i]==' ')
		{
			for (j=i+1;j<k;j++)
				printf("%c",str[j]);
			k=i;
			printf(" ");
		}
	}
	for (j=0;j<k;j++)
		printf("%c",str[j]);
}