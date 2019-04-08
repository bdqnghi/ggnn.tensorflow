int main(){
	int num;
	scanf("%d",&num);
	int i;
	int f=0,m=0;
	char c[7];
	double high;
	double mh[40],nh[40];
	for(i=0;i<num;i++){
	scanf("%s %lf",c,&high);
	if(strcmp(c,"male")==0){
	m=m+1;
	mh[m-1]=high;
	}else{
	f=f+1;
	nh[f-1]=high;
	}
	}
	int j;
	double max;
	for(i=1;i<=m;i++){
		for(j=0;j<m-i;j++){
			if(mh[j]>mh[j+1]){
			max=mh[j];
			mh[j]=mh[j+1];
			mh[j+1]=max;
			}
		}}
	for(i=1;i<=f;i++){
		for(j=0;j<f-i;j++){
			if(nh[j]<nh[j+1]){
			max=nh[j];
			nh[j]=nh[j+1];
			nh[j+1]=max;
			}
		}}
	for(i=0;i<m;i++){
	printf("%.2lf ",mh[i]);
	}
	printf("%.2lf",nh[0]);
	for(i=1;i<f;i++){
	printf(" %.2lf",nh[i]);
	}

return 0;
}
