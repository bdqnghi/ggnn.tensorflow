int main()
{
	int n,i,l=0,s=100,p;
	char a[200][100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",&a[i]);
		p=strlen(a[i]);
		if(p>l)
			l=p;
		if(p<s)
			s=p;
	}
	for(i=0;i<n;i++)
	{
		p=strlen(a[i]);
		if(p==l)
		{
			puts(a[i]);
			break;
		}
	}
	for(i=0;i<n;i++)
	{
		p=strlen(a[i]);
		if(p==s)
		{
			puts(a[i]);
			break;
		}
	}
	return 0;
}