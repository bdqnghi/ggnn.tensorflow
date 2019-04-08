int main(void)
{
	int m=1,n=1;
	int*p;
	int i,j,k;
	
	while(m!=0&&n!=0)
	{
	scanf("%d%d",&n,&m);
	if(m==0||n==0)
		break;
	
	p=(int*)malloc(sizeof(int)*n);

	for(i=0;i<n;i++)
		p[i]=0;

	k=n;
	j=1;

	for(i=0;i<n;i=(i+1)%n)
	{
		if(p[i])
			continue;

		if(j++==m)
		{
			p[i]=1;
			k--;
			j=1;
		}

		if(k==0)
		{
			printf("%d\n",i+1);
			break;
		}
	}
	}
	free(p);
		return 0;
}