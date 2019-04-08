int main()
{
	int i,l,j;
	char a[256];
	gets(a);
	l=strlen(a);
	for(j=0;j<100;j++)
	{
	for(i=0;i<l;i++)
	{
		if(a[i]==' '&&a[i+1]==' ')
		{
			while(i<l)
			{
				a[i+1]=a[i+2];
				i++;
			}
		}
	}
	}
	printf("%s",a);
	return 0;
}

