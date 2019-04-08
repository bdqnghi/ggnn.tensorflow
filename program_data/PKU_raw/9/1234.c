int main ()
{
	int n,k,h,g,m,i,j;
	int max[100];
	char s[100][10];
	struct 
	{
	    char d[10];
		int a;
	}p[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s%d",p[i].d,&p[i].a);
	}
	m=0;
	for(i=0;i<n;i++)
	{
		if(p[i].a>=60)
		{
			m++;
		}
	}
	k=m;
	for(i=0;i<n;i++)
	{
		if(p[i].a<60)
		{
           strcpy(s[k],p[i].d);
		   k=k+1;
		}
	}
	g=0;
	for(j=0;j<m;j++)
	{
		max[j]=59;
		for(i=0;i<n;i++)
		{
			if(p[i].a>max[j])
			{
				max[j]=p[i].a;
				h=i;
			}
		}
		p[h].a=59;
		strcpy(s[g],p[h].d);
		g++;
	}
	for(i=0;i<n;i++)
	{
		printf("%s\n",s[i]);
	}

		return 0;

}
