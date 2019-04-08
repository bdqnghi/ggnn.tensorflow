int main(){
	int a[10],m[10],n,i,c;
	float GPA,b,s;
	scanf("%d",&n);
	s=0;
	c=0;
	for(i=0;i<n;i++){
		scanf("%d",&m[i]);
		c+=m[i];
	}
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		if(90<=a[i]&&a[i]<=100){
			b=4.0;}
                if(85<=a[i]&&a[i]<=89){
                        b=3.7;}
		if(82<=a[i]&&a[i]<=84){
			b=3.3;}
		if(78<=a[i]&&a[i]<=81){
			b=3.0;}
		if(75<=a[i]&&a[i]<=77){
                        b=2.7;}
	        if(72<=a[i]&&a[i]<=74){
	                b=2.3;}
                if(68<=a[i]&&a[i]<=71){
			b=2.0;}
	        if(64<=a[i]&&a[i]<=67){
		        b=1.5;}
	        if(60<=a[i]&&a[i]<=63){
		        b=1.0;}
	        if(a[i]<60){
	                b=0.0;}
		s+=b*m[i];
		
	}
	GPA=s/c;
	printf("%.2f",GPA);
	return 0;
}
