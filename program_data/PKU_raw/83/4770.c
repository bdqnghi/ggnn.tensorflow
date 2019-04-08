int main(){
	int n,i,xf[10],df[10],s=0;
	double jd[10],zongjd[10],sum=0,a;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&xf[i]);
	}
	for(i=0;i<n;i++){
		scanf("%d",&df[i]);
	}
	for(i=0;i<n;i++){
		if(df[i]>=90){
			jd[i]=4.0;
		}else if(df[i]>=85){
			jd[i]=3.7;
		}else if(df[i]>=82){
			jd[i]=3.3;
		}else if(df[i]>=78){
			jd[i]=3.0;
		}else if(df[i]>=75){
			jd[i]=2.7;
		}else if(df[i]>=72){
			jd[i]=2.3;
		}else if(df[i]>=68){
			jd[i]=2.0;
		}else if(df[i]>=64){
			jd[i]=1.5;
		}else if(df[i]>=60){
			jd[i]=1.0;
		}else{
			jd[i]=0;
		}
	}
	for(i=0;i<n;i++){
		zongjd[i]=jd[i]*xf[i];
		sum+=zongjd[i];
		s+=xf[i];
	}
	a=sum/s;
	printf("%.2lf",a);
	return 0;
}
