int main ()
{
	char a[10000],b[50][100];
	int c[50],m,n;
	int i=0,j=0,p=0;
	gets(a);
	m=strlen(a);
	for(;i<m;i++,p++)
	{
		b[j][p]=a[i];
		c[j]++;
		if(a[i]==' ')
		{
			b[j][p]='\0';
			c[j]--;
			j++;
			p=-1;
		}
	}
	b[j][p+1]='\0';
	m=n=c[0];
	for(i=1;i<=j;i++)
	{
		if(m<c[i])  m=c[i];
		if(n>c[i])  n=c[i];
	}
	for(i=0;i<=j;i++)
		if(c[i]==m) break;
		printf("%s\n",b[i]);
	for(i=0;i<=j;i++)
		if(c[i]==n) break;
		printf("%s\n",b[i]);
        return 0;
}