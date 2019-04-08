int main(){
	int n;
	scanf("%d",&n);
	struct point{
		char a[10];
		double b;
	}sz[40];
	int i;
	for(i=0;i<n;i++){
		scanf("%s",sz[i].a);
		scanf("%lf",&sz[i].b);
	}
	int count1=0;
	for(i=0;i<n;i++){
		if(strcmp(sz[i].a,"male")==0){
			count1+=1;
		}
	}
	int count2=n-count1;
	double xsz[40];
	int k=0;
	for(i=0;i<n;i++){
		if(strcmp(sz[i].a,"male")==0){
			xsz[k]=sz[i].b;
			k+=1;
		}
	}
	int j;
	double p;
	for(j=1;j<=count1;j++){
		for(i=0;i<count1-j;i++){
			if(xsz[i]>xsz[i+1]){
				p=xsz[i];
				xsz[i]=xsz[i+1];
				xsz[i+1]=p;
			}
		}
	}
	int o=0;
	double xxsz[40];
	for(i=0;i<n;i++){
		if(strcmp(sz[i].a,"female")==0){
			xxsz[o]=sz[i].b;
			o+=1;
		}
	}
	double q;
	for(j=1;j<n-count1;j++){
		for(i=0;i<n-count1-j;i++){
			if(xxsz[i]<xxsz[i+1]){
				q=xxsz[i];
				xxsz[i]=xxsz[i+1];
				xxsz[i+1]=q;
			}
		}
	}
	for(i=0;i<count1;i++){
		printf("%.2lf ",xsz[i]);
	}
	for(i=0;i<n-count1-1;i++){
		printf("%.2lf ",xxsz[i]);
	}
	printf("%.2lf",xxsz[n-count1-1]);
	return 0;
}





