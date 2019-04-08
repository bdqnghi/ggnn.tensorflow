int main(){
	int t,i,r,sz[10000];
	double cz[10000],jz[10000];
	scanf("%d",&t);
	for(i=0;i<t;i++){
		scanf("%d",&sz[i]);
	}
	for(i=0;i<t;i++){
		double sum=0;
		cz[1]=2.0;
		jz[1]=1.0;
		if(sz[i]==1){
			sum+=2.0/1.0;
		}else{
			sum=2.0/1;
			for(r=2;r<=sz[i];r++){
				cz[r]=cz[r-1]+jz[r-1];
				jz[r]=cz[r-1];
				sum=sum+cz[r]/jz[r];
			}
		}
		printf("%.3lf\n",sum);
	}
		return 0;
}
