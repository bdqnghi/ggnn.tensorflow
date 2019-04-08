int main(){
	int i,n,j,k=0,l=0;
	char c[40][10];
	double a[40],ag[40],ab[40],x;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s%lf",c[i],&a[i]);
	}
	for(i=0;i<n;i++){
		if(strcmp(c[i],"female")==0){
			ag[k]=a[i];
			k++;
		}
		if(strcmp(c[i],"male")==0){
			ab[l]=a[i];
			l++;
		}
	}
	for(i=1;i<=k;i++){
		for(j=0;j<k-i;j++){
			if(ag[j]>ag[j+1]){
				x=ag[j+1];
				ag[j+1]=ag[j];
				ag[j]=x;
			}
		}
	}
	for(i=1;i<=l;i++){
		for(j=0;j<l-i;j++){
			if(ab[j]>ab[j+1]){
				x=ab[j+1];
				ab[j+1]=ab[j];
				ab[j]=x;
			}
		}
	}
	for(i=0;i<l;i++){
		printf("%.2lf ",ab[i]);
	}
	for(i=k-1;i>0;i--){
		printf("%.2lf ",ag[i]);
	}
	printf("%.2lf",ag[0]);
	return 0;
}