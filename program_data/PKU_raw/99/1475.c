int main(){
	int n=0,i=0,age=0;
	double a=0,b=0,c=0,d=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&age);
		if(age<=18){
			a=a+1;
		}
		if((age>18)&&(age<=35)){
			b=b+1;
		}
		if((age>35)&&(age<=60)){
			c=c+1;
		}
		if(age>60){
			d=d+1;
		}
	}
	double A=0,B=0,C=0,D=0;
	A=((double)(a*100/n));
	B=((double)(b*100/n));
	C=((double)(c*100/n));
	D=((double)(d*100/n));
    printf("1-18: %.2lf%%\n",A);
    printf("19-35: %.2lf%%\n",B);
    printf("36-60: %.2lf%%\n",C);
    printf("60??: %.2lf%%\n",D);

	return 0;
}
