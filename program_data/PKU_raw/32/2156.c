void main()
{
	char a[100],b[100],c[100],r[100],str[100],substr[100];
	int i,j,m1,m2,n,k,t;
	scanf("%d",&n);
	for(k=1;k<=n;k++)
	{
		str[0]='\0';
		substr[0]='\0';
		scanf("%s",str);
		scanf("%s",substr);
		m1=strlen(str);
		m2=strlen(substr);
		for(i=0,j=m1-1;i<m1;i++,j--)
			a[i]=str[j];
		a[i]='\0';
		for(i=0,j=m2-1;i<m2;i++,j--)
			b[i]=substr[j];
		if(m1>m2)
			for(i=m2;i<m1;i++)
				b[i]='0';
		b[i]='\0';
		for(i=0;i<m1;i++)
		{
			if(a[i]>=b[i])
				c[i]=a[i]-b[i]+48;
			else
			{
				c[i]=a[i]+10-b[i]+48;
				a[i+1]--;
			}
		}
		for(i=m1-1;c[i]=='0';i--);
		c[i+1]='\0';
		t=strlen(c);
		for(i=0,j=t-1;i<t;i++,j--)
			r[i]=c[j];
		r[i]='\0';
		puts(r);
	}

}
	
