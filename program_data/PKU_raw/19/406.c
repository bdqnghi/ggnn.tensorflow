void main()
{
	int j,m,n,o,a;
	char *i,*k;
	char c1[200],c2[100],c3[100];
	char *p=c1,*q=c2,*r=c3;
	gets (p);
	gets (q);
	gets (r);
	n=strlen(p);
	m=strlen(q);
	a=strlen(r);
	for (i=p;i<=p+n-1;i++)
	{
		if ((*i==*q)&&((i==p)||*(i-1)==' '))
		{
			o=0;
			for (j=0;j<=m-1;j++)
			{
				if (*(i+j)!=*(q+j))
					o=1;
				if (((i+m-1)!=(p+n-1))&&*(i+m)!=' ')
					o=1;
			}
			if (o==0&&a>m)
				for (k=p+n-1;k>=i+m;k--)
					*(k+a-m)=*k;
			if (o==0&&a<m)
				for (k=i+m;k<=p+n-1;k++)
					*(k+a-m)=*k;
			if (o==0)
			{
			    for (j=0;j<=a-1;j++)
				    *(i+j)=*(r+j);
			    i=i+a;
		    	n=n-m+a;
			}
		}
	}
	for (i=p;i<=p+n-1;i++)
		printf("%c",*i);
	printf("\n");
}