int main(){
	int n,m;
	int i,k;
	int f0,f1,f2,fm,fz;
	double x=0;
    scanf("%d",&n);

	
	for(i=0;i<n;i++){
	scanf("%d",&m);
	if(m==1){
		x=1.0*2/1;
		printf("%.3lf\n",x);
	}
	if(m==2){
		x=1.0*3/2+1.0*2/1;
		printf("%.3lf\n",x);
	}
    if(m>2){	
	f0=1;
	f1=2;
	f2=3;
	x=0;
	x+=1.0*3/2+1.0*2/1;
		for(k=2;k<m;k++){
			fz=f1+f2;
			fm=f0+f1;
			f0=f1;
			f1=f2;
            f2=fz;
        x+=1.0*fz/fm;
		}
		
		printf("%.3lf\n",x);

	}
	}
	

	return 0;
}