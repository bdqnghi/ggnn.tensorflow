int main(){
	int n,i;
	int xf[10],cj[10];
	float a,b,jd[10],GPA;
	a=0;
	b=0;
	GPA=0;
	scanf("%d\n",&n);
	for(i=0;i<n;i++){
		scanf("%d",&xf[i]);
	}
    for(i=0;i<n;i++){
		scanf("%d",&cj[i]);
	}
	for(i=0;i<n;i++){
		if(cj[i]>=90){
			jd[i]=4.0f;
		}else if(cj[i]>=85){
			jd[i]=3.7f;
		}else if(cj[i]>=82){
			jd[i]=3.3f;
		}else if(cj[i]>=78){
			jd[i]=3.0f;
		}else if(cj[i]>=75){
			jd[i]=2.7f;
		}else if(cj[i]>=72){
			jd[i]=2.3f;
		}else if(cj[i]>=68){
			jd[i]=2.0f;
		}else if(cj[i]>=64){
			jd[i]=1.5f;
		}else{
			jd[i]=0.0f;
		}
	}
	for(i=0;i<n;i++){
		a+=xf[i];
	}
	for(i=0;i<n;i++){
		b+=jd[i]*xf[i];
	}
	GPA=b/a;
	printf("%.2f",GPA);
	return 0;
}