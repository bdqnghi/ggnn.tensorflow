
int main()
{
	char a[250],b[250],c[250];
	int i,j=0,k;
	int numa=0,numb=0;
	int ca,cb,cc,cy;
	char m[10]={'0','1','2','3','4','5','6','7','8','9'};
	gets(a);
	gets(b);
	for(i=0;a[i];i++)
		numa++;
	for(i=0;b[i];i++)
		numb++;
	if(numa>=numb)
	{
		for(i=numa-1;i>=(numa-numb);i--)
	b[i]=b[i-numa+numb];
	for(i=0;i<(numa-numb);i++)
		b[i]='0';
	}
    if(numa<numb)
	{
		for(i=numb-1;i>=(numb-numa);i--)
	a[i]=a[i-numb+numa];
	for(i=0;i<(numb-numa);i++)
		a[i]='0';
	numa=numb;
	}
	
    for(i=0;i<=numa;i++)
		c[i]='0';
    for(i=numa-1;i>=0;i--)
	{ca=a[i]-'0';
	cb=b[i]-'0';
	cc=ca+cb;
	cy=c[i+1]-'0';
	if(cc+cy<10)
		c[i+1]=m[cc+cy];
	if(cc+cy>=10)
	{c[i]='1';
	c[i+1]=m[cc+cy-10];}
	}
	for(i=0;i<=numa;i++)
	{	if(c[i]=='0')
	j++;
	}
	if(j==numa+1)
		printf("0\n");
	else
	{
		for(i=0;i<=numa;i++)
		{	if(c[i]!='0')
		{k=i;
		break;}
		}
        for(i=k;i<=numa;i++)
	    printf("%c",c[i]);
	}
	return 0;
}

