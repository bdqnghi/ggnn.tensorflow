void main()
{
	char c[2000];
	int a[50];
	int ci,i,j,k,n,len;
	for(k=0;k<=40;k++)a[k]=0;
	gets(c);
	len=strlen(c);
	c[len]=' ';
	ci=1;
	j=1;
	for(i=1;i<=len;i++)
	{
		if(c[i-1]!=' '&&c[i]!=' ')
		{
			j=j+1;
		}
		else if(c[i-1]==' '&&c[i]!=' ')
		{
			ci=ci+1;
			j=1;
		}
		else if(c[i-1]!=' '&&c[i]==' ')
		{
			a[ci]=j;
		}
		
	}

for(i=1;i<=ci-1;i++)printf("%d,",a[i]);
printf("%d\n",a[ci]);
}