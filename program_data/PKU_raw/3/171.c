int main()
{
	int n, i, k, j;
	int a[1000], sum;
	int b;
	scanf("%d %d", &n, &k);
	scanf("%d", &a[0]);
	for(i=1;i<n;i++){
		scanf("%d", &a[i]);
		for(j=0;j<i;j++){
			sum=a[i]+a[j];
			if(sum==k){
				b=1;
			}
		}
	}
	if(b==1){
		printf("yes");
	}
	else{
		printf("no");
	}
	return 0;
}
