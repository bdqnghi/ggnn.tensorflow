int main(){
	int n,i,xf[10],df[10],zxf;
	float GPA,jd[10],xfjd[10],zxfjd;
	zxfjd=0;
	zxf=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&(xf[i]));
	}
	for(i=0;i<n;i++){
		scanf("%d",&(df[i]));
	}
	for(i=0;i<n;i++){
		if(df[i]>=90&&df[i]<100){
			jd[i]=4.0;
			xfjd[i]=xf[i]*jd[i];
		}
		if(df[i]>=85&&df[i]<=89){
			jd[i]=3.7;
			xfjd[i]=xf[i]*jd[i];
		}
		if(df[i]>=82&&df[i]<=84){
			jd[i]=3.3;
			xfjd[i]=xf[i]*jd[i];
		}
		if(df[i]>=78&&df[i]<=81){
			jd[i]=3.0;
			xfjd[i]=xf[i]*jd[i];
		}
		if(df[i]>=75&&df[i]<=77){
			jd[i]=2.7;
			xfjd[i]=xf[i]*jd[i];
		}
		if(df[i]>=72&&df[i]<=74){
			jd[i]=2.3;
			xfjd[i]=xf[i]*jd[i];
		}
		if(df[i]>=68&&df[i]<=71){
			jd[i]=2.0;
			xfjd[i]=xf[i]*jd[i];
		}
		if(df[i]>=64&&df[i]<=67){
			jd[i]=1.5;
			xfjd[i]=xf[i]*jd[i];
		}
		if(df[i]>=60&&df[i]<=63){
			jd[i]=1.0;
			xfjd[i]=xf[i]*jd[i];
		}
		if(df[i]<60){
			jd[i]=0;
			xfjd[i]=xf[i]*jd[i];
		}
		
	}
	for(i=0;i<n;i++){
		zxfjd+=xfjd[i];	
	}
	for(i=0;i<n;i++){
		zxf+=xf[i];
	}
	GPA=zxfjd/zxf;
	printf("%.2f",GPA);
return 0;

}