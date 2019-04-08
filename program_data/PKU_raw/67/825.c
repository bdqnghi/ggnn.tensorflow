int main(){
	int n,i;
	scanf("%d",&n);
    int all[100],health[100];
	double rate[100];
	for(i=0;i<n;i++){
		scanf("%d %d",&all[i],&health[i]);
		rate[i]=1.0*health[i]/all[i];
	}
    for(i=1;i<n-1;i++){
		if(rate[i]>rate[0]+0.05){
			printf("better\n");
		}else if(rate[i]<rate[0]-0.05){
	        printf("worse\n");
		}else{
            printf("same\n");
		}
	}
        if(rate[n-1]>rate[0]+0.05){
			printf("better");
		}else if(rate[n-1]<rate[0]-0.05){
	        printf("worse");
		}else{
            printf("same");
		}

	return 0;
}
