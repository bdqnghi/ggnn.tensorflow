void main()
{
	char s[2000],a[2000];
	int i,k,n,b;
	gets(s);
	n=strlen(s);
	k=0;
	i=0;
	while(i<n)
	{
		if(isalnum(s[i]))
		{
			b=0;
			a[k]=s[i];
			k++;
		}
		else if (b<1)
		{
			a[k]=s[i];
			k++;
			b++;
		}
		i++;
	}
	printf("%s",a);
}

			

		





