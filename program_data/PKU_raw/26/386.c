int main()
{
	char a[100],b[100];
	gets(a);
	int i,j;
	i=0;
	j=0;
	while(a[i]!='\0')
	{
		if(a[i]==' ')
		{
			b[j]=' ';
			j++;
			do
			{
				i++;
			}
			while(a[i]==' ');
		}
		else
		{
			b[j]=a[i];
			i++;
			j++;
		}
	}
	b[j]='\0';
	printf("%s",b);
	return 0;
}