int main(){
	int i,j,n;
	scanf("%d",&n);

	int sz[10000];
	for(i=0;i<n;i++){
		scanf("%d",&sz[i]);
	}
	int zr[10000][2];
	zr[0][0]=2;
	zr[0][1]=1;
	zr[1][0]=3;
	zr[1][1]=2;
	for(i=2;i<10000;i++){
		zr[i][0]=zr[i-1][0]+zr[i-2][0];
		zr[i][1]=zr[i-1][1]+zr[i-2][1];
	}

	double fs[10000]={0};
	for(i=0;i<10000;i++){
		fs[i]=(double)zr[i][0]/zr[i][1];
	}
	double jg[10000]={0};
	for(i=0;i<n;i++){
		for(j=0;j<sz[i];j++){
			jg[i]+=fs[j];
		}
	}
	for(i=0;i<n;i++){
		printf("%.3lf\n",jg[i]);
	}
	return 0;
}