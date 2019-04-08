void main()
{
	int a,b,k,i,m,n,tof,l;
	char e[1600];
	int g[1201],h[1201];
	scanf("%s",e);
	l=strlen(e);
	a=0;b=0;m=0;tof=0;
	for(i=0;i<l;i++)
	{
		if(e[i]>='0'&&e[i]<='9')
		{m=m*10+e[i]-48;tof=1;}
		else if(tof==1)
		{g[a]=m;m=0;a=a+1;tof=0;}
		if(i==l-1) 	{g[a]=m;m=0;a=a+1;tof=0;}
	}
	n=0;
	for(i=0;i<a-1;i++)
	{for(k=0;k<a-1-i;k++)
	if(g[k]<g[k+1])
	{b=g[k];g[k]=g[k+1];g[k+1]=b;}
	}
	if(a==1) printf("No\n");
	else
	{
	for(i=0;i<a-1;i++)
	{
		if(g[i]!=g[i+1]) 
		{printf("%d\n",g[i+1]);break;}
		if(i==a-2) printf("No\n");
	}
	}
}