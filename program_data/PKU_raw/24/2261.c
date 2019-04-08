void main()
{
	char c;
	char s[210][100];
	int i=0,k,u=1,n;
	for(;;)
	{
		if(u==0)
			break;
		c=getchar();
		if(c=='\n')
			break;
		if(c==' '||c==',')
			continue;
		k=0;
		s[i][0]=c;
		for(;;)
		{
			c=getchar();
			if(c==' '||c==',')
				break;
			if(c=='\n')
			{
				u=0;
				break;
			}
			k++;
			s[i][k]=c;
		}
		s[i][k+1]='\0';
		i++;
	}
	n=i-1;
	for(i=1,k=0;i<=n;i++)
		if(strlen(s[k])<strlen(s[i]))
			k=i;
	printf("%s\n",s[k]);
	for(i=1,k=0;i<=n;i++)
		if(strlen(s[k])>strlen(s[i]))
			k=i;
	printf("%s",s[k]);
}
