int main(){
	int n,m;
	
	scanf("%d",&n);
	for(int a=0;a<n;a++){
		scanf("%d",&m);
     double s=0;
	int sz[1000];
	sz[0]=1;
	sz[1]=2;
	for(int i=2;i<1000;i++){
		sz[i]=sz[i-1]+sz[i-2];
	}
	double qh[1000];
	for(int g=1;g<1000;g++){
		qh[g]=1.0*sz[g]/sz[g-1];
	}
	for(int r=1;r<=m;r++){
		
	    s+=qh[r];
	}
	 printf("%.3lf\n",s);
	
}
	return 0;
}

