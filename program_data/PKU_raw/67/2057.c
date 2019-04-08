int main(){
	int n;
	
	scanf("%d",&n);
	int *a=(int*)malloc(sizeof(int)*n);
	int *b=(int*)malloc(sizeof(int)*n);
	double x,y;
	for(int i=0;i<n;i++){
		scanf("%d %d",&a[i],&b[i]);
		if(i==0){
			x=(double)b[i]/a[i];
		}else{
			y=(double)b[i]/a[i];
		}
		if(i!=0){
			if(i!=1){
				printf("\n");
			}
			if((y-x)>0.05){
				printf("better");
			}else if((x-y)>0.05){
			
				printf("worse");
			}else{
				printf("same");
			}

		}

	
		
	
	
	
	}


	//scanf("%d",&n);





	return 0;
}