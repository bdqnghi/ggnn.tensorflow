int main(){
	int n,i;
	double a,b;
	int df[100];
	double GPA;
	int xf[100];
	double jd[100];
	scanf("%d\n",&n);
	for(i=0;i<=n-2;i++){
		scanf("%d",&xf[i]);
	}
	scanf("%d\n",&xf[n-1]);
	for(i=0;i<=n-1;i++){
		scanf("%d",&df[i]);
	}
    for(i=0;i<=n-1;i++){
		if(df[i]<60){
			jd[i]=0*xf[i];
		}else if(df[i]>=60&&df[i]<=63){
				jd[i]=1.0*xf[i];
			}else if(df[i]>=64&&df[i]<=67){
				jd[i]=1.5*xf[i];
				}else if(df[i]>=68&&df[i]<=71){
					jd[i]=2.0*xf[i];
				}else if(df[i]>=72&&df[i]<=74){
					jd[i]=2.3*xf[i];
				}else if(df[i]>=75&&df[i]<=77){
					jd[i]=2.7*xf[i];
				}else if(df[i]>=78&&df[i]<=81){
					jd[i]=3.0*xf[i];
				}else if(df[i]>=82&&df[i]<=84){
					jd[i]=3.3*xf[i];
				}else if(df[i]>=85&&df[i]<=89){
					jd[i]=3.7*xf[i];
				}else if(df[i]>=90&&df[i]<=100){
					jd[i]=4.0*xf[i];
				}
				}
	for(i=0,a=0,b=0;i<=n-1;i++){
        a+=xf[i];
		b+=jd[i];
	}
	GPA=b/a;
	printf("%.2lf",GPA);
	return 0;
}