int main()
{
	int a[5000][2],n,i,j,t1,t2;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<2;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(j=1;j<=n;j++){
		for(i=0;i<n-j;i++){
			if(a[i][0]>a[i+1][0]){
				t1=a[i+1][0];
				a[i+1][0]=a[i][0];
				a[i][0]=t1;
				t2=a[i+1][1];
				a[i+1][1]=a[i][1];
				a[i][1]=t2;
			}
		}
	}
	int b=a[0][1];
	for(i=0;i<n-1;i++){
		if(b<a[i+1][0]){
			printf("no");
			return 0;
		}else{
			if(b<a[i+1][1]){
				b=a[i+1][1];
			}
		}
	}
	printf("%d %d",a[0][0],b);
	return 0;
}

