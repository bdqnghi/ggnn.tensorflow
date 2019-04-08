int f(int a)
{
	int i,k;
	k=sqrt(a);
	for(i=2;i<=k;i++)
		if(a%i==0)
			break;
		if(i>=k+1)
			return(1);
			else
				return (0);
}
void main()
{
	int n,a[1500],i,j=0,k=0,flag=1;
	scanf("%d",&n);
	for(i=2;i<=n;i++)
		if(f(i))
		{
			a[j]=i;
			j++;
		}
		for(k=1;k<j;k++)
			if(a[k]+2==a[k+1])
			{
				printf("%d %d\n",a[k],a[k+1]);
				flag=0;
			}
			if(flag)
				printf("empty\n");
}