

int main()
{
	char a[100][100];
	int i;
	char c;
	for (i=0;;i++)
	{
		scanf ("%s%c",a[i],&c);
		if (c!=' ')
		{
			break;
		}
	}
	printf ("%s",a[i]);
	for (i-1;i-1>=0;i--)
		printf (" %s",a[i-1]);
} 