int main()
{
	char str1[100];
	int n,i,m;
	gets(str1);
	n=strlen(str1);
	for(i=n-1;i>=0;i--)
	{
		if(str1[i]==' ')
		{
			for(m=i+1;m<n;m++)
				printf("%c",str1[m]);
				n=i;
				printf(" ");
		}
	}
	for (m=0;m<n;m++)
	printf("%c",str1[m]);

	return 0;
}
