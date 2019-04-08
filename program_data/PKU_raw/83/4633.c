int main()
{
	double a[11];
	double b[11];
	double sum=0;
	double GPA=0;
	int n,i;
	

	for(i=0;i<11;i++){
		a[i]=0;
		b[i]=0;
	}
	scanf("%d",&n);

	for(i=0;i<n;i++){
		scanf("%lf",&a[i]);
		sum+=a[i];
	}
	for(i=0;i<n;i++){
		scanf("%lf",&b[i]);
		
	}

	for(i=0;i<n;i++){
		if(100>=b[i]&&b[i]>=90){
			b[i]=4.0;
			continue;}
		if(89>=b[i]&&b[i]>=85){
			b[i]=3.7;
			continue;}
		if(84>=b[i]&&b[i]>=82){
			b[i]=3.3;
			continue;}
		if(81>=b[i]&&b[i]>=78){
			b[i]=3.0;
			continue;}
		if(77>=b[i]&&b[i]>=75){
			b[i]=2.7;
			continue;}
		if(74>=b[i]&&b[i]>=72){
			b[i]=2.3;
			continue;}
		if(71>=b[i]&&b[i]>=68){
			b[i]=2.0;
			continue;}
		if(67>=b[i]&&b[i]>=64){
			b[i]=1.5;
			continue;}
		if(63>=b[i]&&b[i]>=60){
			b[i]=1.0;
			continue;}
		if(60>b[i]){
			b[i]=0.0;
			continue;}		
		
	}
	for(i=0;i<n;i++){
		GPA+=b[i]*a[i];
}

	printf("%.2f",GPA/sum);
	return 0;
}
