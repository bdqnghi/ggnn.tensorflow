int main(){
	int n,i,nianling,a=0,b=0,c=0,d=0,he;
	double a1,b1,c1,d1;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&nianling);
		if(nianling<=18){
			a++;}
		if((nianling<=35)&&(nianling>=19)){
			b++;}
		if((nianling<=60)&&(nianling>=36)){
			c++;}
		if(nianling>60){
			d++;}
	}
	he=a+b+c+d;
	a1=1.0*a/he*100;
	b1=1.0*b/he*100;
	c1=1.0*c/he*100;
	d1=1.0*d/he*100;
	printf("1-18: %.2lf%%\n",a1);
	printf("19-35: %.2lf%%\n",b1);
	printf("36-60: %.2lf%%\n",c1);
	printf("60??: %.2lf%%\n",d1);
	return 0;
}