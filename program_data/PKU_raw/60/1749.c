int main()
{
	int n,i,j,k,t;
	int s=0;
	scanf("%d",&n);
	int a[N],b[N];
	memset(a,0,sizeof(a));
	for(i=0;i<N;i++)
		b[i]=1;
	j=0;
	for(i=3;i<=n;i=i+2)
		a[j++]=i;
	for(i=0;i<N;i++)
		if(a[i]==0)
		{
			t=i;
			break;
		}
	for(i=0;i<t;i++)
	{
		k=sqrt(a[i])+1;
		for(j=2;j<=k;j++)
			if(a[i]%j==0)
			{
				b[i]=0;
				break;
			}
	}
	for(i=0;i<t-1;i++)
		if(b[i]==1 && b[i+1]==1)
		{
			s++;
			printf("%d %d\n",a[i],a[i+1]);
		}
	if(s==0)
		printf("empty\n");
	return 0;
}

