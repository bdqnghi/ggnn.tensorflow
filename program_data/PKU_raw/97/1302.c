int main(){
	int a=0,b=0,c=0,d=0,e=0,f=0,n;
	scanf("%d",&n);
	if(n>=100){
		a=n/100;}
	else{a=0;}
	if((n-a*100)>=50){
		b=(n-a*100)/50;}
	else{b=0;}
	if((n-a*100-50*b)>=20){
		c=(n-a*100-50*b)/20;}
	else{c=0;}
	if((n-a*100-50*b-20*c)>=10){
		d=(n-a*100-50*b-20*c)/10;}
	else{d=0;}
	if((n-a*100-50*b-20*c-10*d)>=5){
		e=(n-a*100-50*b-20*c-10*d)/5;}
	else{e=0;}
	if((n-a*100-50*b-20*c-10*d-5*e)>0){
		f=n-a*100-50*b-20*c-10*d-5*e;}
	else{f=0;}
	printf("%d\n%d\n%d\n%d\n%d\n%d\n",a,b,c,d,e,f);
	return 0;

}
