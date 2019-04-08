void f1(int *p,int n,int k)
{
	int i,m=*p;
	for(i=0;i<n;i++)
	{if(*(p+i)<m)
	m=*(p+i);}
	for(i=0;i<n;i++)
	*(p+i)=*(p+i)-m;
	if(k>1) f1(p+100,n,(k-1));
}
void f2(int *p,int n,int k)
{
	int i,m=*p;
	for(i=0;i<n;i++)
	{if(*(p+i*100)<m)
	m=*(p+i*100);}
	for(i=0;i<n;i++)
		*(p+i*100)=*(p+i*100)-m;
	if(k>1) f2(p+1,n,(k-1));
}
int main()
{
	int *p,a[100][100],n,i,j,t,m,h;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			for(t=0;t<n;t++)
				scanf("%d",&a[j][t]);}
		p=a[0];
		h=0;
		for(j=n;j>1;j--)
		{f1(p,j,j);
		f2(p,j,j);
		h+=a[1][1];
		for(t=0;t<j;t++)
		{
			for(m=1;m<(j-1);m++)
				a[t][m]=a[t][m+1];}
		for(t=0;t<(j-1);t++)
		{
			for(m=1;m<(j-1);m++)
				a[m][t]=a[m+1][t];}}
		printf("%d\n",h);}
	return 0;
}