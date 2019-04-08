main()
{
	char s[50]={0},w[50]={0};
	int i,j,ls,lw,d,p=0,q=1;
	char *ps,*pw;
	scanf("%s %s",s,w);
	ps=&s[0];pw=&w[0];
	ls=strlen(s);
	lw=strlen(w);
	for (i=0;i<lw;i++)
	{
		if (*(pw+i)==*ps)
		{
			for (j=0;j<ls;j++)
			{
				if (*(pw+i+j)==*(ps+j))
				{
					p=1;
					continue;
				}
				else
				{
					p=0;
					break;
				}
			}
		    if (p)
			{
			    if (q)
				{
				    d=i;
				    q=0;
				}
			}
		}
		else
			continue;
	}
	printf("%d\n",d);
}