void main()
{
	char a[10000]={0};
	gets(a);
	int i,n,m=0,b[400],p=0,q=0,j;
	for(i=0;i<400;i++)
		b[i]=0;
	n=strlen(a);
	for(i=0;i<n;i++)
	{
		j=i;
		if(a[i]==' ')
			m=0;
		else m=1;
		if(m==1)
		{
			while(a[j]!=' '&&j<n)
			{
				q=q+1;
				j=j+1;
			}
			b[p]=q;
			i=i+q;
			q=0;
			p=p+1;
		}

	}
	for(i=0;i<p-1;i++)
	printf("%d,",b[i]);
	printf("%d",b[p-1]);
}