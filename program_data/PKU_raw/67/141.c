int main(){
	int a[N],b[N];
	double c[N];
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d %d",&a[i],&b[i]);
	}
	for(i=0;i<n;i++){
		c[i]=(((1.0*b[i]/a[i]))*100);
	}
	for(i=0;i<n;i++){
		if(i!=0){
		   if(c[i]-c[0]>5){
			    printf("better\n");
		   }else if(c[0]-c[i]>5){
			    printf("worse\n");
		   }else{
		    	printf("same\n");
		   }
		}
	}
    return 0;
	}