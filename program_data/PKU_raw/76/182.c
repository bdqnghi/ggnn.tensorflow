int main(){
	int n,i,j,k,e,f;
	int a[50000][2];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<2;j++)
			scanf("%d",&a[i][j]);
	}
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(a[j][0]<=a[i][0]){
				k=a[j][0];
				a[j][0]=a[i][0];
				a[i][0]=k;
				f=a[j][1];
				a[j][1]=a[i][1];
				a[i][1]=f;
			}
			else if(a[j][0]==a[i][0]){
				if(a[j][1]<=a[i][1]){
					e=a[j][1];
					a[j][1]=a[i][1];
					a[i][1]=e;
				}
			}
		}
	}
	int m=0;
	for(i=0;i<n;i++){
		if(a[i][1]>=m)
			m=a[i][1];
	}
	int x=a[0][1];
	for(i=1;i<n;i++){
		for(j=0;j<i;j++){
			if(a[i-1][1]>=x)
				x=a[i-1][1];
			if(a[i][0]>x){
			printf("no\n");
			j=i;
			i=n+1;
			}
		}
	}
	if(i==n)
		printf("%d %d\n",a[0][0],m);
	return 0;
}