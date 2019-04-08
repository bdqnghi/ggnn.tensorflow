int main(){
	int n,i,j,nanrenshu=0,nvrenshu=0;
	char zfc[7],male[7]={'m','a','l','e','\0'},female[7]={'f','e','m','a','l','e','\0'};
	float nan[41],nv[41],jh;
	scanf("%d",&n);
	for(i=0;i<=40;i++){
		nan[i]=0;
		nv[i]=0;
	}
	for(i=1;i<=n;i++){
		scanf("%s",zfc);
		if(strcmp(zfc,male)==0){
			scanf("%f",&nan[i]);
			nanrenshu++;
		}
		if(strcmp(zfc,male)!=0){
			scanf("%f",&nv[i]);
			nvrenshu++;
		}
	}
	for(i=1;i<n;i++){
		for(j=1;j<n-i+1;j++){
			if(nan[j]<nan[j+1]){
				jh=nan[j];
				nan[j]=nan[j+1];
				nan[j+1]=jh;
			}
			if(nv[j]<nv[j+1]){
				jh=nv[j];
				nv[j]=nv[j+1];
				nv[j+1]=jh;
			}
		}
	}
	printf("%.2f",nan[nanrenshu]);
	for(i=nanrenshu-1;i>0;i--){
		printf(" %.2f",nan[i]);
	}
	for(i=1;i<=nvrenshu;i++){
		printf(" %.2f",nv[i]);
	}
	scanf("%d",&n);
	return 0;
}