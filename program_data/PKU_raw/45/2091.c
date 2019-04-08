void main()
{
	char s[100];
	int i=0,n,j=0;
	gets(s);
	while(s[i]!=' ')
	{
		i++;
	}
	n=i;
	while(n)
	{
		while(j<n)
		{
			if(s[j]!=s[i+1+j])
				break;
			if(j==n-1)
			{
				printf("%d\n",i-n);
				n=0;
			}
			j++;
		}
		i++;
	}
}
