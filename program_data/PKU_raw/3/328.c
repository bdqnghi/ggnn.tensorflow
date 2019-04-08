int main()
{
	int n,i,k,j=0,a[1000];
	scanf("%d%d",&n,&k);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(j=0;j<n;j++)
     	for(i=j+1;i<n;i++)
		{ 
		if((a[j]+a[i])==k)
		{
			printf("yes");
			j=n;
		}
		if(j==n)
			break;
		if(j==n-2)
			printf("no");
		}
	return 0;
}
