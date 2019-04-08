int main(){
	int n,xf[100],df[100],xfzh=0;
	double jdzh=0.0,jd[100],xfjd[100],zpjd;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&xf[i]);
		xfzh+=xf[i];
	}
	for(int a=0;a<n;a++){
		scanf("%d",&df[a]);
	}
	for(int b=0;b<n;b++){
		if(df[b]>=90&&df[b]<=100){
			jd[b]=4.0;
		}else if(df[b]>=85&&df[b]<=89){
			jd[b]=3.7;
		}else if(df[b]>=82&&df[b]<=84){
			jd[b]=3.3;
		}else if(df[b]>=78&&df[b]<=81){
			jd[b]=3.0;
		}else if(df[b]>=75&&df[b]<=77){
			jd[b]=2.7;
		}else if(df[b]>=72&&df[b]<=74){
			jd[b]=2.3;
		}else if(df[b]>=68&&df[b]<=71){
			jd[b]=2.0;
		}else if(df[b]>=64&&df[b]<=67){
			jd[b]=1.5;
		}else if(df[b]>=60&&df[b]<=63){
			jd[b]=1.0;
		}else{
			jd[b]=0.0;
		}
		xfjd[b]=jd[b]*xf[b];
		jdzh+=xfjd[b];
	}
	zpjd=jdzh/xfzh;
	printf("%.2lf\n",zpjd);
	return 0;
}