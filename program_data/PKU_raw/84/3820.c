int main()
{
	int n,i,m[100],t;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&m[i]);
		if(m[i]>=m[i-1])
		m[i]=m[i],m[i-1]=m[i-1];
		else if(m[i]>=m[i-2])
		t=m[i],m[i]=m[i-1],m[i-1]=t;
		else m[i]=m[i-1],m[i-1]=m[i-2];
	}
	printf("%d\n%d\n",m[n],m[n-1]);
	return 0;
}