int main(){
	int n,s[1000][2];
	double y[1000];
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d%d",&s[i][0],&s[i][1]);
        y[i]=s[i][1]*1.0/s[i][0];
		
	}
	for(int j=1;j<n;j++){
		if((y[j]-y[0])>0.05){
			printf("better");
		}else if((y[0]-y[j])>0.05){
			printf("worse");
		}else{printf("same");}
		printf("\n");
	}
return 0;
}