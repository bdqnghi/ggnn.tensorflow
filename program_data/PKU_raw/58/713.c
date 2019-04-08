int main()
{
int f(char a[],int t);
int n,i,p,m;
char a[100];
scanf("%d\n",&n);
for(i=1;i<=n;i++)
{
	gets(a);
	m=strlen(a);
	p=f(a,m);
	printf("%d\n",p);
}
}
int f(char a[],int t)
{
	int c=1,l;
	for(l=1;l<=t-1;l++)
	{
		if((a[l]!='_')&&(!((a[l]>=48&&a[l]<=57)||(a[l]>=65&&a[l]<=90)||(a[l]>=97&&a[l]<=122)))){c=0;break;}
	}
    if((c==1)&&(a[0]=='_'||((a[0]>=65&&a[0]<=90)||(a[0]>=97&&a[0]<=122))))c=1;
    else c=0;
	return(c);
}