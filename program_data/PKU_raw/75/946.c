int tr(char a[],int b[])
{
	int l,i,j=1;
	l=strlen(a);
	for(i=0;i<l;i++)
		if(a[i]!=',')
			b[j]=b[j]*10+a[i]-'0';
		else
			j++;
	return(j-1);
}
void main()
{
	char a[10000],b[10000];
	int i,j,k,n,l=0,c[5000]={0},d[5000]={0},m[1001]={0};
	gets(a);
	gets(b);
	n=tr(a,c);
	n=tr(b,d);
	for(i=1;i<=n+1;i++)
		for(j=c[i];j<d[i];j++)
			m[j]++;
	for(i=1;i<=1000;i++)
		if(l<m[i])
			l=m[i];
	printf("%d %d",n+1,l);
}