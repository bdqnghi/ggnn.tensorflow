int main ()
{
	char a[100],b[10000],c=0;
	
	scanf ("%s",a);
	int i;
	for (i=0;i<10000;i++)
		b[i]=0;
	for (i=0;i<strlen(a);i++)
	{
		if (a[i]<='z'&&a[i]>='a')
		{
			b[a[i]]++;
			c=1;
		}
	else continue;
	}
	if (c!=0)
	{
		for (i='a';i<='z';i++)
	
		if (b[i]!=0)
		{
			
			printf ("%c=%d\n",i,b[i]);
		}
	}
	else printf("No");
	return 0;
}

