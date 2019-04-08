int main()
{
	int i,j,m=0,n=1000,o,p,q;
	char jz[500];
	gets(jz);
	char a[300],b[300],c[300];
	o=strlen(jz);
	for(i=0;i<o;i++)
	{
		j=0;
		while(jz[i]!=' ')
		{
			a[j]=jz[i];
			j++;
			i++;
		}
		a[j]='\0';
		p=strlen(a);

		if(m<p)
		{
			m=p;
			strcpy(b,a);
		}
		q=strlen(a);
		if(n>q)
		{
			n=q;
			strcpy(c,a);
		}
	}
	printf("%s\n",b);
	printf("%s\n",c);
	return 0;
}		