void main()
{
	char a[100]={0},b[100]={0};
	gets(a);
	int len;
	int i=0,j=0;
	len=strlen(a);
	for(i=0,j=0;i<len;i++)
	{
		if(a[i]!=' ')
		{
			b[j]=a[i];
			j++;
		}
		if(a[i]==' ')
		{
			if(a[i+1]!=' ')
			{
				b[j]=a[i];
				j++;
			}
		}
	}
	puts(b);
}

