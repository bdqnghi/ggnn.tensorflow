int main(){
	int i=0,c=0,k=0,l=0;
	int a[50000],b[50000],h[50000],n;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d%d",&a[i],&b[i]);
	}
	for(i=0;i<n;i++){
			h[i]=0;
	}
	for(i=0;i<n;i++){
		for(l=i;l<n;l++){
			if(a[l]>=90&&a[l]<=140&&b[l]>=60&&b[l]<=90){
				h[i]++;
			}else{
				i=l;
				break;
			}
		}
	}
	for(i=0;i<n;i++){
		if(h[i]>k){
			k=h[i];
		}
	}

	printf("%d",k);


	return 0;
}