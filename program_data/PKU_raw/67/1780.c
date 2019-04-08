int main(){
	int a[100][2];
	double b[100];
	int n,i,j;
	scanf("%d",&n);
	for(j=0;j<n;j++){
		for(i=0;i<2;i++){
			scanf("%d",&a[j][i]);
		}
	}
b[0]=100.0*a[0][1]/a[0][0];
    for(j=1;j<n;j++){
	
		
			b[j]=100.0*a[j][1]/a[j][0];
			if(b[j]-b[0]>5){
				printf("better\n");
			}
			else if(b[j]-b[0]<-5){
				printf("worse\n");
			}
			else {
				printf("same\n");
			}
		
	}
	return 0;
}