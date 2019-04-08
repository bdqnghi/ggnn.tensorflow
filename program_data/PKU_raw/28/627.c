void main ()
{
	int a[300],i,j=0,len,word=0;
	char str[3000];
	gets(str);
	len=strlen(str);
	for (i=0;i<300;i++)
		a[i]=0;
	for (i=0;i<len;i++)
	{
		if (str[i]==' ')
		{
			if (word==1)
			{
				word=0;
				j++;
			}
		}
		else 
		{
			if (word==0)
				word=1;
			a[j]++;
		}
	}
	for (i=0;i<j;i++)
		printf ("%d,",a[i]);
	printf ("%d",a[j]);
}