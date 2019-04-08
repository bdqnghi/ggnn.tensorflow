int main(){
	int n,i,a[100],b[100];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d %d",&a[i],&b[i]);
	}
	for(i=1;i<n;i++){
		if((1.0*b[i]/a[i])-(1.0*b[0]/a[0])>0.05){
			printf("better\n");
			continue;
		}
		if((1.0*b[0]/a[0])-(1.0*b[i]/a[i])>0.05){
			printf("worse\n");
			continue;
		}
		else printf("same\n");
	}
	return 0;
}