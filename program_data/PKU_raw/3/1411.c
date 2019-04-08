int main()
{
    int n,k;
	int a[1000];
	
	
	scanf("%d %d",&n,&k);
	for(int j=0;j<n;j++)
	{  scanf("%d",&a[j]);
	}

	for(int e=0;e<=n;e++){
		for(int i=e+1;i<n;i++){
			if(a[e]+a[i]==k){
			printf("yes");
			e=n+1;
			i=n;}
			}
		if(e==n){	
			printf("no");}	
	}
	

	return 0;





}