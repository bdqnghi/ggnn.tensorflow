int main()
{
	int i=0,j=0,k=0,n=0,m=0,a[10000]={0},d[1000][2],c[5]={1,10,100,1000,10000};
	char b,e[6]={0};
	for(;;)
	{
		b=getchar();
		i=0;
		m=0;
		for(;;i++)
		{
			if(b==','||b=='\n') break;
			e[i]=b;
			b=getchar();
		}
		for(k=i-1;k>=0;k--)
			m=m+(e[k]-'0')*c[i-1-k];
		n++;
		d[j++][0]=m;
		if(b=='\n') break;
	}
	j=0;
	for(;;)
	{
		b=getchar();
		i=0;
		m=0;
			for(;;i++)
		{
			if(b==','||b=='\n') break;
			e[i]=b;
			b=getchar();
		}
		for(k=i-1;k>=0;k--)
			m=m+(e[k]-'0')*c[i-1-k];
		d[j++][1]=m;
		if(b=='\n') break;
	}
	printf("%d ",n);
	for(i=0;i<n;i++)
		for(j=d[i][0];j<d[i][1];j++)
			a[j]++;
	m=0;
	for(i=0;i<10000;i++)
        if(a[i]>m) m=a[i];
	printf("%d",m);
}