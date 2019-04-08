int main(){
	int a,b,c,d,e,f,A,B,C,m=0;
	while(1){
	scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
	if(a==b&&b==c&&c==d&&d==e&&e==f&&f==0)
		break;
	else{
	if(c>f){
		C=f+60-c;
		if(e-1<=b){
			B=e-1+60-b;
			A=11+d-a;
		}
		else {
			B=e-1-b;
			A=12+d-a;
		}
	}
	else if(c<=f){
		C=f-c;
		if(e<=b){
			B=e+60-b;
			A=11+d-a;
		}
		else{
			B=e-b;
			A=12+d-a;
		}
	}
	m=3600*A+60*B+C;
	printf("%d\n",m);
	}
	}
	return 0;
}