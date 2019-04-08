int main(){
	int ai[100];
	int i,j,n;
	scanf("%d",&n);
	ai[99]=1;
	for(i=0;i<99;i++){
		ai[i]=0;
	}
	for(j=0;j<n;j++){
	    for(i=0;i<100;i++){
			ai[i]*=2;
			if(ai[i]>9){
				ai[i]=ai[i]-10;
				ai[i-1]+=1;
			}
		}
	}
	for(i=0;i<100;i++){
		if(ai[i]!=0){
			for(j=i;j<100;j++){
			printf("%d",ai[j]);
			}
			break;
		}
	}
	return 0;
}