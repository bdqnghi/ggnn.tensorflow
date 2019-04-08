struct inf
{
	int nu;
	int b;
	int c;
	int sum;
} a[100010],tmp;
int main()
{
	int n,i,j,k,tmp1,tmp2;
	char c;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		{
			a[i-1].sum=0;
			scanf("%d%d%d",&a[i-1].nu,&a[i-1].b,&a[i-1].c);
			a[i-1].sum=a[i-1].b+a[i-1].c;
	}
	for(i=0;i<3;i++)
	{
		tmp1=i;tmp2=a[i].sum;
		for(j=i+1;j<n;j++)
		{
			if(a[j].sum>tmp2)
				{
					tmp2=a[j].sum;
					tmp1=j;
			}
		}
		tmp=a[i];
		a[i]=a[tmp1];
		a[tmp1]=tmp;
	}
	for(i=0;i<3;i++)
		printf("%d %d\n",a[i].nu,a[i].sum);
	return 0;
}
