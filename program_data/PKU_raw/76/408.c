int main()
{
	int n,a[50000],b[50000],i,k,e,j,m=0,h=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d %d",&a[i],&b[i]);
	}
	for(k=1;k<=n;k++){
		for(i=0;i<n-k;i++){
			if(b[i]>b[i+1]){
				e=b[i+1];
				b[i+1]=b[i];
				b[i]=e;
				e=a[i+1];
				a[i+1]=a[i];
				a[i]=e;
			}else if(b[i]==b[i+1]){
				if(a[i]>a[i+1]){
					e=a[i+1];
					a[i+1]=a[i];
					a[i]=e;
				}
			}
		}
	}
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(!(b[i]>=a[j])){
				m++;
			}
			if(m==n-1-i){
				printf("no");
				h=1;
			}
			if(j==n-1){
				m=0;
			}
		}
		if(i==n-2&&h!=1){
			printf("%d %d",a[0],b[n-1]);
		}
	}
	return 0;
}