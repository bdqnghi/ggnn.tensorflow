int main(){
	int n,i;
	double old,xlf;
	scanf("%d",&n);
	int*zs=(int*)malloc(sizeof(int)*n);
	int*yx=(int*)malloc(sizeof(int)*n);
	
	
	for(i=0;i<n;i++){
		scanf("%d%d",&zs[i],&yx[i]);
	}
	for(i=0;i<n;i++){
		if(i==0){
			old=(double)yx[i]/zs[i];
		}else{
			xlf=(double)yx[i]/zs[i];
			if(xlf-old>0.05){
				printf("better");
				printf("\n");
			}else if(old-xlf>0.05){
				printf("worse");
				printf("\n");
			}else{
				printf("same");
				printf("\n");
			}
			
		}
	}
return 0;
}