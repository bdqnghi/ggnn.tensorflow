int main()
{
	int a,b,t,i,p=0,e,j,f=1;
	char c[100],d[100];
	scanf("%d %s %d",&a,c,&b);
	t=strlen(c);
	for (i=t-1;i>=0;i--)
	{
		if(c[i]>=65&&c[i]<=91)
			p+=f*(c[i]-55);
		else if (c[i]>=97&&c[i]<=123)
			p+=f*(c[i]-87);
		else if (c[i]>=48&&c[i]<=57)
			p+=f*(c[i]-48);
		f=f*a;
	
		}
	for (j=0;;j++)
	{
		e=p%b;
		p=p/b;
		if(e>=0&&e<=9)
			d[j]=e+'0';
		else if(e>=10&&e<=35)
		d[j]=e-10+'A';
		if(p==0)
			break;}
	for(i=j;i>=0;i--)
	{
		printf("%c",d[i]);
	}
	printf("\n");



	return 0;

}