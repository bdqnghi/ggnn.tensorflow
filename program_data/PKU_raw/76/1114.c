int main(){
	int n,i,k,e,l;
	int ai[50000];
	int bi[50000];

	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d %d",&(ai[i]),&(bi[i]));
	}

	for(i=0;i<n-1;i++){
		for(k=0;k<n-i-1;k++){
			if(ai[k]>ai[k+1]){
				e=ai[k+1];
				ai[k+1]=ai[k];
				ai[k]=e;

				e=bi[k+1];
				bi[k+1]=bi[k];
				bi[k]=e;
			}
		}
	}
	i=0;l=0;
	while(i<n-1){
		for(k=l+1;k<n;k++){
			if(bi[i]<=bi[k]){
				break;
			}
		}
	
		if(bi[i]<ai[k]){
			printf("no");
			break;
		}
		l=k;
		i=l;
		if(bi[i]>bi[n-1]){
			printf("%d %d",ai[0],bi[i]);
		}
		else if(i==n-1){
			printf("%d %d",ai[0],bi[n-1]);
		}
	}
return 0;
}