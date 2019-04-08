int main()
{
	long int a,b,t=0,i,j,k,l,m,u,v,f[1000];
	char c[1000],d[1000]={'\0'};
	scanf("%d%s%d",&a,c,&b);
	u=strlen(c);
	for(i=0;i<u;i++)
	{
		f[i]=c[i];
	}
	for(i=u-1;i>=0;i--)
	{
		if(f[i]>=97)
			f[i]=f[i]-87;
		else if(f[i]>=65)
			f[i]=f[i]-55;
		else
			f[i]=f[i]-48;
	}
	for(j=0;j<u-1;j++)
	{
		for(k=0;k<u-1-j;k++)
			f[j]=f[j]*a;
	}
	for(l=0;l<u;l++)
		t=t+f[l];
	if(t==0)
	{
		printf("0");
	}
	else
	{
		for(m=0;t>0;m++)
	{
		if(t<b)
		d[m]=t;
		else d[m]=t%b;
		t=(t-d[m])/b;
		if(d[m]>9)
			d[m]=d[m]+55;
		else
			d[m]=d[m]+48;
	}
	}
	v=strlen(d);
	for(m=v-1;m>=0;m--)
	{
			printf("%c",d[m]);
	}
	return 0;
}