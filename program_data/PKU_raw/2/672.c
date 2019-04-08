struct book
{
	int num;
	char name[27];
}b[1001];
void main()
{
	int n,i,j,k,d,g[27],e=0,f=0,l;
	char m,h;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d %s",&b[i].num,b[i].name);
	m='A';
	for(k=0;k<26;k++)
	{
		d=0;
	    for(i=0;i<n;i++)
		{
			for(j=0;j<26;j++)
			{
				if(b[i].name[j]==m)
					d++;
			    if(b[i].name[j]=='\0')
					break;
			}
		}
		m=m+1;
		g[k]=d;
		if(g[k]>e)
		{
			e=g[k];
			f=k;
		}
	}
	h='A'+f;
	printf("%c\n%d\n",h,e);
	for(i=0;i<n;i++)
	{
		d=0;
		for(j=0;j<26;j++)
		{
			if(b[i].name[j]==h)
				d++;
			if(b[i].name[j]=='\0')
				break;
		}
		if(d!=0)
			printf("%d\n",b[i].num);
	}
} 