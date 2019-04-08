main()
{
	char a[101];
	char b[101]={0};
	gets(a);
	int l,i,m,j;
	int k=0;
	l=strlen(a);
	m=l;
	for(i=l-1;i>=0;i--)
	{
		if(a[i]==' ')
		{
			for(j=i+1;j<m;j++)
			{
				b[k]=a[j];
				k++;
			}
			b[k]=' ';
			k++;
			m=i;
		}
		if(i==0)
		{
			for(j=i;j<m;j++)
			{
				b[k]=a[j];
				k++;
			}
		}
	}
	puts(b);
}