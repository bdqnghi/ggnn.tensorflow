int main()
{
	int i,j,c,k,ma,mi,nma,nmi;
	char s[500],a[50][50];
	gets(s);
	for(i=0,j=0,k=0;i<500;i++)
	{
		if(s[i]!=' '&&s[i]!='\0')
		{
			a[j][k]=s[i];
			k++;
		}
		else if(s[i]==' ')
		{
			a[j][k]='\0';
			j++;
			k=0;
		}
		else
		{
			a[j][k]='\0';
			break;
		}
	}
	nma=0;
	nmi=0;
	ma=strlen(a[0]);
	mi=strlen(a[0]);
	for(i=1;i<=j;i++)
	{
		c=strlen(a[i]);
		if(c<mi)
		{
			mi=c;
			nmi=i;
		}
		if(c>ma)
		{
			ma=c;
			nma=i;
		}
	}
	puts(a[nma]);
	scanf("\n");
	puts(a[nmi]);
	scanf("\n");
	return 0;
}





