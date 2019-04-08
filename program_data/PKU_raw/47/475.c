int main()
{
	int n=0;
    scanf("%d",&n);
	int sz[100];
	int x;
	for(int i=0;i<n;i++){
		scanf("%d",&x);
	    sz[i]=x;}
	for(int j=n-1;j>=0;j--){
		if(j!=0)
		{
			printf("%d ",sz[j]);
		}
		else
		{
			printf("%d",sz[j]);
		}
	}
	return 0;
}
