int main()
{
	char a[51];
	char b[51];
	int i,j;
	int k;
	scanf("%s %s",a,b);
	for(i=0;a[i]!='\0';i++)
	{
		for(j=0;b[j]!='\0';j++)
		{
			if(a[i]==b[j]&&a[i]!='\0'&&b[j]!='\0')
			{
				k=j-i;
				i++;
			}
		}
	}
	printf("%d\n",k);
	return 0;
}

