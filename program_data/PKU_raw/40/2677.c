int main()
{
	int i;
	double a[5],s,S,e;
	for(i=0;i<5;i++){
		scanf("%lf",&a[i]);}
	s=(a[1]+a[2]+a[3]+a[0])/2;
	e=((s-a[1])*(s-a[2])*(s-a[3])*(s-a[0])-a[1]*a[2]*a[3]*a[0]*cos(a[4]/2*3.1415926/180)*cos(a[4]/2*3.1415926/180));
	if(e<0){
		printf("Invalid input");}
	else{
		S=sqrt(e);
		printf("%.4lf",S);}
	return 0;
}

    
