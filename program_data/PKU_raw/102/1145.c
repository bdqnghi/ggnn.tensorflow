int main(){
	int n;
	char zfc[1000][7];
	double sg[100];
	double nsg[100];
	double nvsg[100];
	int nsm=0;
	int nvsm=0;
	int k,i;
	int e=0;
	int s=0;
	double r,t;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s%lf",&zfc[i],&sg[i]);
	}
	for(i=0;i<n;i++){
		if(zfc[i][0]=='m'){
			nsm=nsm+1;
			e=e+1;
			nsg[e-1]=sg[i];
		}else if(zfc[i][0]=='f'){
			nvsm=nvsm+1;
			s=s+1;
			nvsg[s-1]=sg[i];
		}
	}
	for(k=0;k<nsm;k++){
		for(i=0;i<nsm-1-k;i++){
			if(nsg[i]>nsg[i+1]){
					r=nsg[i+1];
					nsg[i+1]=nsg[i];
					nsg[i]=r;
			}
		}
	}
	for(k=0;k<nvsm;k++){
		for(i=0;i<nvsm-1-k;i++){
			if(nvsg[i]<nvsg[i+1]){
					t=nvsg[i+1];
					nvsg[i+1]=nvsg[i];
					nvsg[i]=t;
			}
		}
	}
	for(i=0;i<nsm;i++){
		printf("%.2lf ",nsg[i]);
	}
	for(i=0;i<nvsm-1;i++){
		printf("%.2lf ",nvsg[i]);
	}
	printf("%.2lf",nvsg[nvsm-1]);
	return 0;
}
