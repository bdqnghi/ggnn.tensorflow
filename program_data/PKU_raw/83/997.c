int main(){
	int xf[10],df[10];
	int n,i,f;
	float j,z,jd[10];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		f=0;
		scanf("%d",&(xf[i]));
	}for(i=0;i<n;i++){
	    scanf("%d",&(df[i]));
		j=0;
		if(df[i]>=90 && df[i]<=100){
			jd[i]=4.0*xf[i];
		}if(df[i]>=85 && df[i]<=89){
			jd[i]=3.7*xf[i];
		}if(df[i]>=82 && df[i]<=84){
			jd[i]=3.3*xf[i];
		}if(df[i]>=78 && df[i]<=81){
			jd[i]=3.0*xf[i];
		}if(df[i]>=75 && df[i]<=77){
			jd[i]=2.7*xf[i];
		}if(df[i]>=72 && df[i]<=74){
			jd[i]=2.3*xf[i];
		}if(df[i]>=68 && df[i]<=71){
			jd[i]=2.0*xf[i];
		}if(df[i]>=64 && df[i]<=67){
			jd[i]=1.5*xf[i];
		}if(df[i]>=60 && df[i]<=63){
			jd[i]=1.0*xf[i];
		}if(df[i]<60){
			jd[i]=0;
		}
	}for(i=0;i<n;i++){
		f+=xf[i];
		j+=jd[i];
	}z=j/f;
	printf("%.2f",z);
	return 0;
}