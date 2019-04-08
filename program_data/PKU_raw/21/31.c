int s(int f[],int n)
{
	int i,sum=0;
	for(i=0;i<n;i++)
		sum+=f[i];
	return sum;
}
int dis(int x,int n,int sum)
{
	int tp;
	if((x*n)>sum)
		tp=x*n-sum;
	else
		tp=sum-x*n;
	return tp;
}
int max_d(int d[],int n,int sum)
{
	int i,tp,max=0;
	for(i=0;i<n;i++)
		if(d[i]>max)
			max=d[i];
	return max;
}
void main()
{
	int i,j=0,n,sum,l;
	int f[300],d[300],out[300];
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&f[i]);
	sum=s(f,n);
	for(i=0;i<n;i++)
		d[i]=dis(f[i],n,sum);
	l=max_d(d,n,sum);
	for(i=0;i<n;i++)
	{
		if((f[i]*n<sum)&&(d[i]==l))
		{
			out[j]=f[i];
			j++;
		}
	}
	for(i=0;i<n;i++)
	{
		if((f[i]*n>sum)&&(d[i]==l))
		{
			out[j]=f[i];
			j++;
		}
	}
	printf("%d",out[0]);
	for(i=1;i<j;i++)
		printf(",%d",out[i]);
}