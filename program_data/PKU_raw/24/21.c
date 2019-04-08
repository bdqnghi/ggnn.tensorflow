int len(char s[100])
{
	int l,i;
	l=0;
	for(i=0;i<100;i++) if(((s[i]>96)&&(s[i]<123))||((s[i]>64)&&(s[i]<91))) l++;
	return l;
}
void main()
{
	int i,p,n,maxlen,minlen,maxnum,minnum;
	char s[1000],c[50][100];
	for(p=0;p<50;p++) for(i=0;i<100;i++) c[p][i]=0;
	for(i=0;i<1000;i++) s[i]=0;
	gets(s);
	i=0;
	do
	{
		c[0][i]=s[i];
		i++;
	}while(((s[i]>96)&&(s[i]<123))||((s[i]>64)&&(s[i]<91)));
	for(n=1;n<50;n++)
	{
		i++;
		p=0;
		do
		{
			c[n][p]=s[i];
			p++;
			i++;
		}while(((s[i]>96)&&(s[i]<123))||((s[i]>64)&&(s[i]<91)));
	}
	maxlen=0;
	minlen=100;
	for(n=0;n<50;n++)
	{
		if(c[n][0]>0)
		{
		if(len(c[n])>maxlen)
		{
			maxlen=len(c[n]);
			maxnum=n;
		}
		if(len(c[n])<minlen)
		{
			minlen=len(c[n]);
			minnum=n;
		}
		}
	}
	printf("%s\n%s",c[maxnum],c[minnum]);
}