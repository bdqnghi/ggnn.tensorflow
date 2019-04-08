int su(int m)
{
	int i,k;
	k=sqrt(m);
	for(i=2;i<=k;i++)
	{
		if(m%i==0) break;
	}
	if(i>k) return 1;
	else return 0;
}
void main()
{
	int n,i,j,k=0;
	scanf("%d",&n);
	for(i=5;i<=n;i++)
	{
		if(su(i)==1&&su(i-2)==1)
		{
			printf("%d %d\n",i-2,i);k++;
		}
	}
	if(k==0) printf("empty\n");
}

