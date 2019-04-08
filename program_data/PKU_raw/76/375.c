int main(){
	int n;
	int a[10000],b[10000];
	int i,k,e,t,min,max,s=1;

	scanf("%d",&n);
	for(i=0;i<n;i++){
			scanf("%d %d",&a[i],&b[i]);
	}

	for(k=1;k<=n;k++){
		for(i=0;i<n-k;i++){
			if(a[i]>a[i+1]){
				e=a[i+1];
				a[i+1]=a[i];
				a[i]=e;
			}
			if(b[i]>b[i+1]){
				t=b[i+1];
				b[i+1]=b[i];
				b[i]=t;
			}
		}
	}
	min=a[0];
	max=b[n-1];

	for(i=0;i<n;i++){
		if(b[i]<a[i+1]){
			s=0;
			printf("no");
			break;
		}
	}
	if(s!=0){
		printf("%d %d",min,max);
	}

	return 0;
}