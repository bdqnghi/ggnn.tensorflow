void main()
{
	char c,a[200][40];
	int i=0,j=0,p,q,b[200],d;
	while(c!='\n')
	{
		c=getchar();
		if(c!=' '&&c!='\n')
		{
			a[i][j]=c;
			j=j+1;}
		if(c==' '||c=='\n')
		{
			a[i][j]='\0';
			b[i]=strlen(a[i]);
			i=i+1;
			j=0;
		}
	}
	p=0;
	q=0;
	for(d=0;d<i;d++)
	{
		if(b[d]>b[p])
			p=d;
		if(b[d]<b[q])
			q=d;
	}
	printf("%s\n%s\n",a[p],a[q]);
}