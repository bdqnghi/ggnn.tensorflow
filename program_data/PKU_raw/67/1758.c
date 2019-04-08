int main(){
	int n,i,a,b;
	scanf("%d",&n);
	double *c=(double*)malloc(sizeof(double)*n);
	for(i=0;i<n;i++){
		scanf("%d%d",&a,&b);
		c[i]=((double)b)/((double)a);
	}
	for(i=1;i<n;i++){
		if(c[i]-c[0]>0.05){
			printf("better\n");
		}
		if(c[i]-c[0]<-0.05){
			printf("worse\n");
		}
		if((c[i]-c[0]>-0.05)&&(c[i]-c[0]<0.05)){
			printf("same\n");
		}
	}
	return 0;
}