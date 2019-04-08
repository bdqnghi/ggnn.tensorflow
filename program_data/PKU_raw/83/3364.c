int main(){
	int n,i;
	double GPA;
	scanf("%d",&n);
	int xf[10];
	int fs[10];
	double jd[10],a=0,b=0;
	for(i=0;i<n;i++){
		scanf("%d",&(xf[i]));
	}
	for(i=0;i<n;i++){
		scanf("%d",&(fs[i]));
	};
	for(i=0;i<n;i++){
        if(fs[i]<=100&&fs[i]>=90){
			jd[i]=4.0;}else
				if(fs[i]>=85){
					jd[i]=3.7;}else
				if(fs[i]>=82){
					jd[i]=3.3;}else
				if(fs[i]>=78){
					jd[i]=3.0;}else
				if(fs[i]>=75){
					jd[i]=2.7;}else
				if(fs[i]>=72){
					jd[i]=2.3;}else
				if(fs[i]>=68){
					jd[i]=2.0;}else
				if(fs[i]>=64){
					jd[i]=1.5;}else
				if(fs[i]>=60){
					jd[i]=1.0;}else{
						jd[i]=0;}
	}
	for(i=0;i<n;i++){
		a+=jd[i]*xf[i];
		b+=xf[i];
	}
	GPA=a/b;
	printf("%.2lf",GPA);


			


	return 0;
}
