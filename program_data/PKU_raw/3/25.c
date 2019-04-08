int main()
{
	int n,k;
	scanf("%d %d\n",&n,&k);
	int a[1000]={0};
	int i;
	scanf("%d",&a[0]);
	for(i=1;i<n;i++){
		scanf(" %d",&a[i]);
	}
	int c=0;
	int j;
	for(i=0;i<(n-1);i++){
		for(j=(i+1);j>i&&j<n;j++){
			if(a[i]+a[j]==k)
				c++;
		}
	}
	if(c!=0){
		printf("yes");
	}
	if(c==0){
		printf("no");
	}
	return 0;
}