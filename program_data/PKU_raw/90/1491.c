int ways(int a,int b)
{
	int p;
	if(b==1||a==0||a==1)
		return 1;
	else
	{
		if(a<b)
			p=ways(a,a);
		else
		p=ways(a,b-1)+ways(a-b,b);
	}
	return p;
}

void main()
{
	int n[20],m[20],t,i,k[20];
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%d%d",&n[i],&m[i]);
		k[i]=ways(n[i],m[i]);
	}
	for(i=0;i<t;i++)
		printf("%d\n",k[i]);
}