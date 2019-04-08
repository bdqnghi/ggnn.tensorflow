int main()
{
	int n,i,m[26],h[26],k=0;
	char z[300];
	for(i=0;i<26;i++)
	{
		m[i]=0;
		h[i]=0;
	}
	scanf("%s",z);
	n=strlen(z);
	for(i=0;i<n;i++)
	{
		if('A'<=z[i]&&'Z'>=z[i])
		{
			m[z[i]-'A']++;
		}
	}
	for(i=0;i<n;i++)
	{
		if('a'<=z[i]&&'z'>=z[i])
		{
			h[z[i]-'a']++;
		}
	}
	for(i=0;i<26;i++)
	{
		if(m[i]!=0)
			{printf("%c=%d\n",'A'+i,m[i]);
		k=1;}
	}
	for(i=0;i<26;i++)
	{
		if(h[i]!=0)
			{printf("%c=%d\n",'a'+i,h[i]);
		k=1;}
	}
	if(k==0)
		printf("No");
	return 0;
}







