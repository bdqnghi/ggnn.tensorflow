int main()
{
	char a[80],b[80];
	int i;
	gets(a);
	gets(b);
	for(i=0;a[i]!=0;i++)
		if(a[i]>=65&&a[i]<=90)a[i]+=32;
	for(i=0;b[i]!=0;i++)
		if(b[i]>=65&&b[i]<=90)b[i]+=32;
	i=strcmp(a,b);
	if(i>0)printf(">");
	else if(i==0)printf("=");
	else printf("<");
	return 0;
}