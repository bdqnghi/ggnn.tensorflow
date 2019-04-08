int dudu (int m,int n)
{
	int f;
	if (m<n) n=m;
	if (m==0||n==1) f=1;
	else f=dudu(m,n-1)+dudu(m-n,n);
	return (f);
}
void main()
{
	int m,n,t,i;
	scanf("%d",&t);
	for (i=0;i<t;i++)
	{
		scanf("%d %d",&m,&n);
		printf("%d\n",dudu(m,n));
	}
}