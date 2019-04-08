
int main(){
	int a;
	scanf("%d", &a);
	if (a<10) {
		printf("%d\n", a);
	} else if (a<100) {
		int b,c;
		b=a%10;
		c=(a-b)/10;
		printf("%02d\n", 10*b+c);
	} else if (a<1000) {
		int d, e,f;
		d=a%10;
		e=a%100;
		e=(e-d)/10;
		f=(a-d-10*e)/100;
		printf("%03d\n", 100*d+10*e+f);
	} else if (a<10000) {
		int g, h, i, j;
		g=a%10;
		h=a%100;
		h=(h-g)/10;
		i=a%1000;
		i=(i-10*h-g)/100;
		j=(a-100*i-10*h-g)/1000;
		printf("%04d\n", 1000*g+100*h+10*i+j);
	}
	return 0;
}


