int main()
{
	char a[20][20],d[100],b[20],c[20];
	int n,j=0,k=0,flag=0,x;
	gets(d);
	gets(b);
	gets(c);
	x=strlen(c);
	for(;x<20;x++) c[x]='\0';
	n=strlen(d);
	for(int i=0;i<n;i++)
	{
		if(d[i]!=' ') a[j][k++]=d[i];
		else
		{
			for(;k<20;) a[j][k++]='\0';
			flag=flag+1;
			j++;
			k=0;
		}
	}
	for(int m=0;m<20;m++)if(a[flag][m]==d[n-1]) k=m+1;
	for(;k<20;) a[flag][k++]='\0';
	for(int p=0;p<20;p++) if(strcmp(a[p],b)==0) strncpy(a[p],c,20);
	printf("%s",a[0]);
	for(int l=1;l<flag+1;l++) printf(" %s",a[l]);
	return 0;
}