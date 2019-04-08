int main(){
	int n,i,s=0;
	float x,y[300],a[300],b[300],m,p;
	scanf("%d",&n);
	scanf("%f %f",&m,&p);
    x=p/m;
	for(i=0;i<n-1;i++){
		scanf("%f %f",&a[i],&b[i]);
		y[i]=b[i]/a[i];
	}
	for(i=0;i<n-1;i++){
		if ((y[i]-x)>0.05){
			printf("better\n");
			s++;
		}
		else if ((x-y[i])>0.05){
			printf("worse\n");
			s++;
		}
		else {
			printf("same\n");
			s++;
		}

	}
	return 0;
}