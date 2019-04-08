void main()
{
	int a,b,l,i,j,m,k;
	char c[100];
	int d[100];
	char e[100];
	int f[100];
	scanf("%d",&a);
	scanf("%s",c);
	scanf("%d",&b);
	l=strlen(c);
	for(i=0;i<l;i++)
	{
		if(c[i]>='A'&&c[i]<='Z')
			f[i]=10+c[i]-'A';
		if(c[i]>='a'&&c[i]<='z')
			f[i]=10+c[i]-'a';
		if(c[i]>='0'&&c[i]<='9')
			f[i]=c[i]-'0';
	}
	m=0;
	for(i=0;i<l;i++)
	{
		k=1;
		j=1;
		while(j<(l-i))
		{
			k=k*a;
			j++;
		}
		m=m+f[i]*k;
	}
	i=0;
	while(m>0)
	{
		if(m>=b)
		{
			d[i]=m%b;
			m=m/b;
			i++;
		}
		else
		{
			d[i]=m;
			m=0;
		}
	}
	l=i+1;
	for(i=0;i<l;i++)
	{
		if(d[i]<10)
			e[l-1-i]=d[i]+'0';
		else
			e[l-1-i]=d[i]-10+'A';
	}
	for(i=0;i<l;i++)
		printf("%c",e[i]);
}


		

	
	
