int monkey(int n1,int m1);
int main()
{
	int m[301],n[301],j,i=0;
	while (1)
	{
		scanf("%d%d",&n[i],&m[i]);
		if(m[i]==0&&n[i]==0)
			break;
		i++;
	}
	for(j=0;j<i;j++)
	{
		printf("%d\n",monkey(n[j],m[j]));
	}
	return 0;
}
int monkey(int n1,int m1)
{
	int res[301],k;
	res[0]=0;
	res[1]=0;
	for(k=2;k<=n1;k++)
	res[k]=(res[k-1]+m1)%k;
	return res[n1]+1;
} 
