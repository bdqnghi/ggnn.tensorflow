main()
{
	int n,i,a,t,d[26]={0},f=0,c,h,e=0;
	struct book
	{
		int N;
		char name[20];
	}p[1000];
	scanf("%d",&n);
	for(i=0;i<=n-1;i++)
		scanf("%d %s",&p[i].N,p[i].name);
	for(i=0;i<=n-1;i++)
	{
        a=strlen(p[i].name);
        for(t=0;t<=a-1;t++)
		{
		    c=p[i].name[t]-'A';
			d[c]++;
		}
	}
	for(i=0;i<=25;i++)
	{
	    if (e<d[i])
		{
		    e=d[i];
			f=i;
		}
	}
	h=f+'A';
	printf("%c\n%d\n",h,e);
	for(i=0;i<=n-1;i++)
	{
        a=strlen(p[i].name);
        for(t=0;t<=a-1;t++)
		{
        	if(p[i].name[t]==h)
			{
			printf("%d\n",p[i].N);
			break;
			}
		}
	}
}