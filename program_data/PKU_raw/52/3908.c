
int main()
{
	void change();
	int n,m,i,f[20]={0};
	
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++)
		scanf("%d",&f[i]);

	for(i=0;i<m;i++)
		change(n,f);
    printf("%d",f[0]);
	for(i=1;i<n;i++)
		printf(" %d",f[i]);
	return 0;
}

void change(int n,int f[20])
{
	int i,k;
	k=f[n-1];
	for(i=n-1;i>0;i--)
		f[i]=f[i-1];
	f[0]=k;
}
