
int main(int argc, char* argv[])
{
	int n,len,i,j;
	char a[256];

	scanf("%d",&n);
	for (i=0;i<=n;i++)
	{
		gets(a);
		len=strlen(a);
		for (j=0;j<len;j++)
		{
			if (a[j]=='A')
			{
				printf("T");
			}
			if (a[j]=='T')
			{
				printf("A");
			}
			if (a[j]=='C')
			{
				printf("G");
			}
			if (a[j]=='G')
			{
				printf("C");
			}
		}
		printf("\n");
	}


	return 0;
}
