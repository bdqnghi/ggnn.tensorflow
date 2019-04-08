int main ()
{
	char a[500],b[10000][500]={0},c[10000]={0};
	int n,i,j,t=0,k,p=0,m,s=0;
	scanf("%s",a);
	n=strlen(a);
	for(j=2;j<=n;j++)
	{
		for(i=0;i<n+1-j;i++)
		{
			for(k=i;k<i+j;k++)
			{
				b[t][p]=a[k];
				p++;
			}
			b[t][p]='\0';
			t++;
			p=0;
		}
	}
	for(t=0;b[t][0]!='0';t++)
	{
		m=strlen(b[t]);
		for(i=0;i<m;i++)
		{
			c[i]=b[t][m-1-i];
		}
		for(i=0;i<m;i++)
		{
		if(c[i]==b[t][i])
		{
			s++;
		}
		}
		if(s==m)
			printf("%s\n",b[t]);
		s=0;
	}
	return 0;
}