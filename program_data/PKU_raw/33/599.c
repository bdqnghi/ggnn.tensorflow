int main()
{
	char s[300],a,b,c,d;
	a='A';
	b='T';
	c='G';
	d='C';
	int n,i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",&s);
		for(j=0;s[j];j++)
		{
			if(s[j]==a)
				s[j]=b;
			else if(s[j]==b)
				s[j]=a;
			else if(s[j]==c)
				s[j]=d;
			else if(s[j]==d)
				s[j]=c;

		}
		printf("%s\n",s);

		
	}

	


	

	return 0;

}