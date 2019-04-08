int main(){
	int n,i;
	double sz1[100],sz2[100],y[100],t;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%lf %lf",&sz1[i],&sz2[i]);
		t=sz2[0]/sz1[0];
	}
	for(i=1;i<n;i++){
		y[i]=sz2[i]/sz1[i];
		if((y[i]-t)>0.05){
			printf("better\n");
		}else if((t-y[i])>0.05){
			printf("worse\n");
		}else{
			printf("same\n");
		}
	}
	return 0;
}