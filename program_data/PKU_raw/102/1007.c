int main(){
	char str[100][7],sts[100][7];
	double u[100],fe[100],ma[100];
	double n,k;
	int f=0,m=0,i,j;
	scanf("%lf",&n);
	for(i=0;i<n;i++){
		fe[i]=0;
		ma[i]=0;
	}
	for(i=0;i<n;i++){
		scanf("%s %lf",sts[i],&u[i]);
		if(sts[i][0]=='f'){
			fe[i]=u[i];
			f++;
		}
		else if(sts[i][0]=='m'){
			ma[i]=u[i];
			m++;
		}
	}
	for(i=0;i<n-1;i++){
		for(j=0;j<n-i-1;j++){
			if(ma[j+1]>ma[j]){
				k=ma[j+1];
				ma[j+1]=ma[j];
				ma[j]=k;
			}
		}
	}
	for(i=0;i<n-1;i++){
		for(j=0;j<n-i-1;j++){
			if(fe[j+1]>fe[j]){
				k=fe[j+1];
				fe[j+1]=fe[j];
				fe[j]=k;
			}
		}
	}
	for(i=m-1;i>=0;i--){
		if(i==m-1){
			printf("%.2lf",ma[i]);
		}
		else if(i<m-1){
		    printf(" %.2lf",ma[i]);
		}
	}
	for(i=0;i<f;i++){
		printf(" %.2lf",fe[i]);
	}
	return 0;
}
