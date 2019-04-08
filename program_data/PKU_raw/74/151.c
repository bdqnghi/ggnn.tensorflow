int my(int n)
{
	int i,l,a[100]={0},b[100]={0},t=1;
	l=(int)log10(n)+1;
	for(i=1;i<=l;i++)
	{
		a[i]=n%10;
		n=(n-a[i])/10;
	}
	for(i=1;i<=l;i++)
	{
		b[i]=a[l-i+1];
	}
	for(i=1;i<=l;i++)
	{
		if(a[i]!=b[i])
		{
			t=0;
			break;
		}
	}
	return t;
}
int su(int n)
{
	int i,t=1;
	for(i=2;i<n/2;i++)
		if(n%i==0)
		{
			t=0;
			break;
		}
	return t;
}
int main()
{
	int su(int n);
	int my(int n);
	int i,m,n,a[1000],k=0;
	scanf("%d %d",&m,&n);
	for(i=m;i<=n;i++)
	{
		if(my(i)==1&&su(i)==1)a[k++]=i;
	}
	if(k==0)
		printf("no");
	else 
	{
		for(i=0;i<k-1;i++)printf("%d,",a[i]);
		printf("%d",a[k-1]);
	}
	return 0;
}