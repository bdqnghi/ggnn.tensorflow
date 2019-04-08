int su (int n)
{
	int i,p=0;
	for (i=2;i<n;i++) 
		if (n%i==0) { p=1; break;}
	return(p);
}
int huiwen(int n)
{
	int s=0,m;
	m=n;
	while (n!=0)
	{
		s=s*10+n%10;
		n=n/10;
	}
	if (s==m) return(0);
	else return(1);
}
void main()
{
	int m,n,i,a[100],k=0;
	scanf("%d%d",&m,&n);
	for (i=m;i<=n;i++)
		if ((su(i)==0)&&(huiwen(i)==0)) a[k++]=i;
	if (k==0) printf("no\n");
	else 
	{
		for (i=0;i<k-1;i++) printf("%d,",a[i]);
		printf("%d\n",a[k-1]);
	}
}
