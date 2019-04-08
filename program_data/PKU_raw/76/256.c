int main(){
	struct qj{
		int lp;
		int rp;
	}qj[50000];
	int n,i,j,maxr,minl,sig;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d %d",&qj[i].lp,&qj[i].rp);
	}
	minl=qj[0].lp;
	maxr=qj[0].rp;
	for(i=0;i<n;i++){
		if(minl>qj[i].lp){
			minl=qj[i].lp;
		}
		if(maxr<qj[i].rp){
			maxr=qj[i].rp;
		}
	}
	sig=1;
	int sign[50000]={0};
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(j!=i){
			if(qj[i].lp==minl) sign[i]=1;
			if(qj[i].lp<=qj[j].rp&&qj[i].lp>=qj[j].lp){
				sign[i]=1;
			}}
		}
	}
	for(i=0;i<n;i++){
		if(sign[i]==0){
			sig=0;
		}
	}
	if(sig==0){
		printf("no");
	}
	else{
	
	printf("%d %d",minl,maxr);
	}
	return 0;
}
