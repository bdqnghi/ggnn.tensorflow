int main()
{
	char c,s[60],w[60];
	int i=0,n,m,j;
	while(1) 
	{
		c=getchar();
		if(c!=' ')
			s[i]=c;
		else
			break;
		i++;
	}
	n=i;
	gets(w);
	m=strlen(w);
	for(i=0;;i++)
	{
		for(j=0;j<n;j++)
			if(s[j]!=w[j+i])
				break;
		if(j==n) 
		{
			printf("%d",i);
			break;
		}
	}
}