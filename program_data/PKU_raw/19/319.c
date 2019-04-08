void main()
{
	char s[300],a[200],b[200];
	char *temp,*ps,*pa,*pb;
	int flag,ls,la,lb;
	gets(s);
	gets(a);
	gets(b);
	ls=strlen(s);
	la=strlen(a);
	lb=strlen(b);
	ps=s;
	pa=a;
	pb=b;
	while (ps<s+ls)
	{
		flag=1;
		for (pa=a;((*ps!=' ') && (*ps!='\0'));ps++,pa++)
			if (*ps!=*pa) flag=0;
		if ((flag) && (pa==a+la))
		{
			if (la>=lb) 
			{
				ps=ps-la;
				while (*pb!='\0') *ps++=*pb++;
				if (la>lb)
				{
					while (*(ps+la-lb)!='\0')
					{	
						*ps=*(ps+la-lb);
						ps++;
					}
					*ps='\0';
				}
			}
			else
			{
				temp=ps;
				for (ps=s+ls;ps>=temp;ps--) 
					*(ps+lb-la)=*ps;
				ps=ps-la+1;
				while (*pb!='\0') *ps++=*pb++;
			}
			pa=a;
			pb=b;
			ls=strlen(s);
		}
		ps++;
	}
	ps=s;
	printf("%s",ps);
}