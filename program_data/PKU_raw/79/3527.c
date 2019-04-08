int f(int m,int n)
{
	int i;
	int k=0;
	for(i=2;i<=n;i++)
		k=((m%i)+k)%i;
	return k;
}
int main(void)
{
	int m[100],n[100];
	int i=0;
	scanf("%d%d",&n[i],&m[i]);
	i++;
	while(n[i-1]!=0||m[i-1]!=0)
	{
	    scanf("%d%d",&n[i],&m[i]);
		i++;
	}

    for(int j=0;j<i-1;j++)
	{
    	printf("%d\n",f(m[j],n[j])+1);
	}
		return 0;
}
