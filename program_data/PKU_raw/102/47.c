int main(){
	int n,i,k,malenum=0;
	double h0[40],hmale[40],hfe[40],e;
	char stu0[40][10],male[5]="male";
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s%lf",stu0[i],&h0[i]);
		hmale[i]=100;
		hfe[i]=0;
		if(strcmp(stu0[i],male)==0){
			hmale[i]=h0[i];
			malenum++;
		}else{
			hfe[i]=h0[i];
		}
	}
	for(k=1;k<=n;k++){
		for(i=0;i<n-k;i++){
			if(hmale[i]>hmale[i+1]){
				e=hmale[i+1];
				hmale[i+1]=hmale[i];
				hmale[i]=e;
			}
		}
	}
	for(i=0;i<malenum;i++){
		printf("%.2lf ",hmale[i]);
	}
	for(k=1;k<=n;k++){
		for(i=0;i<n-k;i++){
			if(hfe[i]<hfe[i+1]){
				e=hfe[i+1];
				hfe[i+1]=hfe[i];
				hfe[i]=e;
			}
		}
	}
	for(i=0;i<n-malenum-1;i++){
		printf("%.2lf ",hfe[i]);
	}
	printf("%.2lf",hfe[n-malenum-1]);
	return 0;
}