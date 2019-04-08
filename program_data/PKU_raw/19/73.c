void main()
{
	char c[101],a[101],b[101],s[10001];
	int n[101],i;
	for(i=0;i<=100;i++) c[i]=s[i]=a[i]='\0';
	gets(c);
	gets(a);
	gets(b);
	int lc;
	lc=strlen(c);
	n[0]=-1;
	int j=1;
	for(i=0;i<=(lc-1);i++)
	{
		if(c[i]==' ')
		{
			n[j]=i;
			j++;
		}
	}
	n[j]=lc;
	char x[2];
	x[0]=' ';
	x[1]='\0';
	for(i=1;i<=j;i++)
	{
		int m;
		char ch[101];
		for(m=0;m<=100;m++) ch[m]='\0';
		for(m=0;m<=(n[i]-n[i-1]-2);m++) ch[m]=c[n[i-1]+m+1];
		if(strcmp(a,ch)==0)	strcat(s,b);
		else strcat(s,ch);
		if(i<j) strcat(s,x);
	}
	puts(s);
}