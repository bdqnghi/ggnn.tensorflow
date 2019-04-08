void main()
{
	char s[100],w[100],p[100],t[100];
	int i,j,flag=1;
	scanf("%s",w);
	scanf("%s",s);
	scanf("%s",t);
	for(i=0;i<strlen(w);i++)
	{
		for(j=0;j<strlen(s);j++)
		{
			p[j]=w[i+j];
		}
		flag=1;
		for(j=0;j<strlen(s);j++)
		{
			if(p[j]!=s[j]) flag=0;
		}
		if(flag!=0)
		{
			for(j=0;j<strlen(s);j++)
			{
				w[i+j]=t[j];
			}
			break;
		}
	}
	printf("%s",w);
}
