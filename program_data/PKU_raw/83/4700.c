int main(){
	int n,i;
	float sum1=0,sum2=0,xf;
	float a[11],b[11];
	scanf("%d",&n);
	for(i=0;i<=n-1;i++){
		scanf("%f",&a[i]);}
	for(i=0;i<=n-1;i++){
		scanf("%f",&b[i]);}
	for(i=0;i<n;i++){
		if(90<=b[i]){
			xf=4.0*a[i];}
		else if(85<=b[i]){
			xf=3.7*a[i];}
		else if(82<=b[i]){
			xf=3.3*a[i];}
		else if(78<=b[i]){
			xf=3.0*a[i];}
		else if(75<=b[i]){
			xf=2.7*a[i];}
		else if(72<=b[i]){
			xf=2.3*a[i];}
		else if(68<=b[i]){
			xf=2.0*a[i];}
		else if(64<=b[i]){
			xf=1.5*a[i];}
		else if(60<=b[i]){
			xf=1.0*a[i];}
		else{xf=0;}
		sum1+=xf;
		sum2+=a[i];}
	printf("%.2f",sum1/sum2);
	return 0;
}
