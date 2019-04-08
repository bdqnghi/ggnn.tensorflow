int main ()
{
	char a[256],b[256],c[256];
	scanf("%s",a);
	scanf("%s",b);
	scanf("%s",c);
	for (int i=0;a[i]!='\0';i++)
	{
		int j;
		for (j=0;(b[j]==a[i+j])&&(b[j]!='\0');j++);
		if (b[j]=='\0')
		{
			for (int k=0;k<i;k++) printf("%c",a[k]);
			printf("%s",c);
			for (int k=i+j;a[k]!='\0';k++) printf("%c",a[k]);
			return 0;
		}
	}
	printf("%s",a);
	return 0;
}