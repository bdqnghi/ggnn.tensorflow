void main()
{
	int l,t=0,i,j,m[100],n;
	char a[1000],b[1000][51],ab[51];
	gets(a);
	l=strlen(a);
	m[0]=0;
	for(i=0;i<l;i++)
	{
		if(a[i]!=' ')
		{
			b[t][m[t]]=a[i];
			m[t]++;
			b[t][m[t]]='\0';
		}
		if(a[i]==' ')
		{
			t++;
			m[t]=0;
		}
	}
	for(i=1;i<=t;i++)
	{
	for(j=0;j<=t-i;j++)
	{
		if(m[j]<m[j+1])
		{
			n=m[j+1];
			m[j+1]=m[j];
			m[j]=n;
			strcpy(ab,b[j]);
			strcpy(b[j],b[j+1]);
			strcpy(b[j+1],ab);
		}
	}
	}
	puts(b[0]);
for(i=1;i<=t;i++)
	{
	for(j=0;j<=t-i;j++)
	{
		if(m[j]>m[j+1])
		{
			n=m[j+1];
			m[j+1]=m[j];
			m[j]=n;
			strcpy(ab,b[j]);
			strcpy(b[j],b[j+1]);
			strcpy(b[j+1],ab);
		}
	}
	}
	puts(b[0]);
}