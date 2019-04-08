int main()
{
	char a[10000];
	int b,i,c;
	scanf("%s",a);
	b=strlen(a);
	i=0;
	if(b%2==0)
	{
		while(i<=(b/2-1))
		{
			c=a[b-1-i];
			a[b-1-i]=a[i];
			a[i]=c;
			i++;
		}
	}
	else
	{
			while(i<=((b-1)/2-1))
			{
				c=a[b-1-i];
				a[b-1-i]=a[i];
				a[i]=c;
				i++;
			}
	}
	printf("%s\n",a);
	return 0;
}
