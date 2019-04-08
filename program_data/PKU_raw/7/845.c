int main()
{
	char a[257],b[257],c[257],d[257],e[257],f[257];
	int i,n1,n2,k,j,m=1;
	gets(a);
	gets(b);
	gets(e);
	n1=strlen(a);
	n2=strlen(b);
	for(i=0;i<n1;i++)
	{
		d[i]=a[i];
		for(k=0;k<n2;k++)
		{
			c[k]=a[i+k];
		}
		c[n2]=0;
		if(strcmp(b,c)==0)
		{
			d[i]=0;
			for(j=0;j<(n1-n2-i);j++)
			{
				f[j]=a[i+n2+j];
			}
			f[j]=0;
			printf("%s%s%s",d,e,f);
			m=0;
                           break;
		}
	}
	if(m)
	{
		puts(a);
	}
	return 0;
}