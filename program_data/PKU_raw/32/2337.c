void func(char u[],char v[]);
void main()
{
	char u[100][101];
    int n,m;
	scanf("%d",&n);
	for (m=0;m<=2*n-2;m=m+2) 
	{
	    scanf("%s",u[m]);
	    scanf("%s",u[m+1]);
		printf("\n");
	}
    for (m=0;m<=2*n-2;m=m+2) func(u[m],u[m+1]);
}
void func(char u[],char v[])
{
    char w[101]={"0"},copy[101]={'0'};
	int m,n,p,q,i,j,k,t;
	int a[101]={0},b[101]={0},c[101]={0},d[101]={0};
	k=0;m=0;n=0;
	i=strlen(u);
	for (p=i;p>=1;p--) u[p]=u[p-1];
	u[0]=48;
	j=strlen(v);
	for (q=j;q>=1;q--) v[q]=v[q-1];
	v[0]=48;
	for (p=0;p<=i;p++) a[p]=u[p]-48;
	for (q=0;q<=j;q++) b[q]=v[q]-48;
	for (q=1;q<=j;q++) d[q]=9-b[q];
	for (q=j,p=i;q>=0;q=q-1,p=p-1)
	{
		c[p]=(a[p]+d[q]+k)%10;
		k=(a[p]+d[q]+k)/10;
	}
	for (;p>=0;p=p-1)
	{
		c[p]=(a[p]+k)%10;
		k=(a[p]+k)/10;
	}
	for (t=i;t>=1;t=t-1)
	{
		c[t]=(c[t]+1)%10;
		if (c[t]!=0) goto yes;
	}
	c[0]=c[0]+1;
yes:for (t=i-j;t>=0;t=t-1)
	{
		c[t]=c[t]-1;
		if (c[t]!=-1) goto diong;
		else c[t]=9;
	}
diong:for (p=0;p<=i;p++) w[p]=c[p]+48;
		while (w[0]==48) for (p=0;p<=i;p++) w[p]=w[p+1];
        printf("%s\n",w);
}
