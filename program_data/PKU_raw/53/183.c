void del(int f[],int n,int k)
{
	int *pt;
	int i;
	for(i=0;i<n;i++)
		if(f[i]==k)
			break;
	for(i=i+1;i<n;i++)
	{
		if(f[i]==k)
		{
			pt=&f[i];
			*pt=0;
		}
	}
}
void main()
{
	int n,i;
	int f[300];
	scanf("%d\n",&n);
	scanf("%d",&f[0]);
	for(i=1;i<n;i++)
		scanf(" %d",&f[i]);
	for(i=0;i<n;i++)
		del(f,n,f[i]);
	printf("%d",f[0]);
	for(i=1;i<n;i++)
		if(f[i])
			printf(",%d",f[i]);
}