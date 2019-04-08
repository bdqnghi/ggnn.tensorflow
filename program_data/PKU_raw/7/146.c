void main()
{
	char *p,*q,*r;
	p=(char *)malloc(1000);q=(char *)malloc(1000);r=(char *)malloc(1000);
	gets(p);gets(q);gets(r);
	int a,b,c;
	a=strlen(p);b=strlen(q);c=strlen(r);
	int i,j,k;int t=1;
	for (i=0;i<a;i++)
	{
		for(j=i,k=0;j<i+b;j++,k++)
		{
			if (p[j]!=q[k])
			{t=0;break;}
		}
		if (k==b) break;
	}
	if(k==b)
	{
	for (j=0;j<i;j++)
		printf("%c",p[j]);
	printf("%s",r);
	for (j=i+b;j<a;j++)
		printf("%c",p[j]);
	}
	else printf("%s",p);
}
	
