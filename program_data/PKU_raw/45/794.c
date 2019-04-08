void main()
{
	char s[50],w[50],m[50];
	int i,j,l,t;
	scanf("%s%s",s,w);
	l=strlen(s);
	t=strlen(w);
	for(i=0;i<t;i++)
	{
		if(w[i]==s[0])
		{
			for(j=0;j<l;j++)
				m[j]=w[i+j];
			m[j]='\0';
			if(strcmp(m,s)==0)
			{
				printf("%d",i);
				break;
			}
		}
	}
}
