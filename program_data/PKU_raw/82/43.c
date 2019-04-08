int main()
{
	int n,j,i,max,f[100],g[100],k[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d %d",&f[i],&g[i]);
	}
	j=0;
	max=0;
	for(i=0;i<n;i++)
	{
		if(f[i]>=90&&f[i]<=140&&g[i]>=60&&g[i]<=90)
		{
			j=j+1;
			k[i]=j;
		}
		else
		{
			k[i]=j;
  			j=0;
		}
	}
	for(i=0;i<n;i++)
	{
		if(k[i]>k[max])
		{
			max=i;
		}
	}
	printf("%d\n",k[max]);
	return 0;
}
