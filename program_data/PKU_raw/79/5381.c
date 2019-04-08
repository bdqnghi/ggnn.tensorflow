int remain(int start[],int n,int m)
{	int k,i,j,d;
	d=n-1;
	for(k=1;k<=(n-1);k++)
	{
		for(i=0,j=0;j<m;)
		{
			++i;
			if(start[(d+i)%n]!=0)
				j++;
		}
		d+=i;
		start[d%n]=0;
	}
	for(i=0;i<n;i++)
	{
		if(start[i]!=0)
			break;
	}
	return(i+1);
}
int main()
{
	int k,n[100],m[100],i,j;
	scanf("%d %d",&n[0],&m[0]);
	for(k=1;n[k-1]!=0&&m[k-1]!=0;k++)
		scanf("%d %d",&n[k],&m[k]);
	int a[100][300];
	for(j=0;j<k-1;j++)
	{
		for(i=0;i<n[j];i++)
			a[j][i]=1;
	}
	for(i=0;i<k-1;i++)
		printf("%d\n",remain(a[i],n[i],m[i]));
	return(0);
}