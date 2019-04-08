int main(){
	int n,i;
	float GPA=0.00,s=0,b=0;
	int xf[10];
	int cj[10];
	float jd[10];
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%d",&(xf[i]));
	}
	for(i=1;i<=n;i++){
		scanf("%d",&(cj[i]));
	}
	for(i=1;i<=n;i++){
		if(cj[i]<=100&&cj[i]>=90){
			jd[i]=4.0;}else
		if(cj[i]<=89&&cj[i]>=85){
			jd[i]=3.7;}else
		if(cj[i]<=84&&cj[i]>=82){
			jd[i]=3.3;}else
		if(cj[i]<=81&&cj[i]>=78){
			jd[i]=3.0;}else
		if(cj[i]<=77&&cj[i]>=75){
			jd[i]=2.7;}else
		if(cj[i]<=74&&cj[i]>=72){
			jd[i]=2.3;}else
		if(cj[i]<=71&&cj[i]>=68){
			jd[i]=2.0;}else
		if(cj[i]<=67&&cj[i]>=64){
			jd[i]=1.5;}else
		if(cj[i]<=63&&cj[i]>=60){
			jd[i]=1.0;}else
		if(cj[i]<=59&&cj[i]>=0){
			jd[i]=0;}
	}
	for(i=1;i<=n;i++){
		s=s+jd[i]*xf[i];
	}
	for(i=1;i<=n;i++){
		b=b+xf[i];
	}
	GPA=s/b;
	printf("%.2f",GPA);
	return 0;
}
