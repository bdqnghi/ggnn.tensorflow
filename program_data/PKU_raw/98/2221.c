main()
{
	int n, l=0, L=0;
	int i, t;
	char w[200][41], c[100]={'\0'};

	scanf("%d", &n);
	for(i=0; i<n; i++)
	{
		scanf("%s", w[i]);
	}
	for(i=0; i<n; i++)
	{
		l=strlen(w[i])+1;//???????????
		L=L+l;
		if(L<=81)
		{
			strcat(c, w[i]);
			strcat(c, " ");
			if(L==81)
			{
				c[80]='\0';
				puts(c);
				for(t=0; c[t]!='\0'; t++)
				{
					c[t]='\0';
				}
				l=L=0;
			}
			if(i==n-1)
			{
				c[L-1]='\0';
				puts(c);
				printf("\n");
			}
		}
		if(L>81)
		{
			c[L-1-l]='\0';
			puts(c);
			printf("\n");
			for(t=0; c[t]!='\0'; t++)
				{
					c[t]='\0';
				}
			strcat(c, w[i]);
			strcat(c, " ");
			L=0;
			l=strlen(w[i])+1;
			L=L+l;
		}
	}
	

	return 0;
}