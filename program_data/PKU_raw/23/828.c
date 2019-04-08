void main()
{
	int i,j=0,k1=0,k2,l;
	char a[102],b[50][20];
	gets(a);
	l=strlen(a);
	a[l]=' ';
	a[l+1]='\0';
	for(i=0;i<=l;i++)
	{
		if(a[i]==' ')
		{
			k2=0;
			for(;j<i;j++)
				b[k1][k2++]=a[j];
			j++;
			b[k1][k2++]='\0';
			k1++;
		}
	}
	for(i=k1-1;i>0;i--)
		printf("%s ",b[i]);
	printf("%s",b[0]);
}	