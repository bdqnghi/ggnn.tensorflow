main()
{
	int n;
	scanf("%d",&n);
	char w[51];
	char *c[]={"er","ly","ing"};
	for(int i=0;i<n;i++)
	{
		scanf("%s",w);
		for(int j=0;j<3;j++)
		{
			int len=strlen(w);
			int slen=strlen(c[j]);
			if(strcmp(c[j],w+len-slen)==0)
			{
				w[len-slen]=0;
				printf("%s\n",w);
				break;
			}
		}
	}
} 