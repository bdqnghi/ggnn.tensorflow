void main()
{
	int f(int m,int n);
	int a,b,e,sum=0;
	int i,j,k;
	char c[100],d[100];
	scanf("%d %s %d",&a,c,&b);
	for(i=0;c[i]!=0;i++);
	for(j=0;j<=i-1;j++)
	{
		if((c[j]>=48)&&(c[j]<=57))sum=sum+(c[j]-48)*f(a,i-j-1);			
		else if((c[j]>=65)&&(c[j]<=90))sum=sum+(c[j]-55)*f(a,i-j-1);
		else if((c[j]>=97)&&(c[j]<=122))sum=sum+(c[j]-87)*f(a,i-j-1);
	}
	e=sum;
	for(i=0;e>=b;i++)
	{
		d[i]=e%b;
		e=e/b;
		if((d[i]>=0)&&(d[i]<=9))d[i]=d[i]+48;
		else if((d[i]>=10)&&(d[i]<=35))d[i]=d[i]+55;
	}
	if((e>=0)&&(e<=9))d[i]=e+48;
	else if((e>=10)&&(e<=35))d[i]=e+55;
	for(k=i;k>=0;k--)printf("%c",d[k]);
}
int f(int m,int n)
{
	int i,z=1;
	for(i=1;i<=n;i++)
		z=z*m;
	return(z);
}
	
