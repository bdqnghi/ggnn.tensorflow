int main(){
	int m,i,k;
	int n[100];
	double res[100];
	int fz[1000];
	int fm[1000];
	scanf("%d",&m);
	for(i=0;i<100;i++){
		res[i]=0;
	}
	for(i=0;i<m;i++){
		scanf("%d",&n[i]);
	}
	for(i=1;i<1000;i++){
		fz[0]=2;
		fm[0]=1;
		fz[i]=fz[i-1]+fm[i-1];
		fm[i]=fz[i-1];
	}
	for(i=0;i<m;i++){
		for(k=0;k<n[i];k++){
			res[i]+=1.0*fz[k]/fm[k];
		}
		printf("%.3lf\n",res[i]);
	}

	return 0;
}
