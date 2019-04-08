int main(){
	int n,m;
	float a,b,c;
         double z,x,y,d,e,f;
	scanf("%d",&n);
	for(m=0;m<n;m++){
		scanf("%f %f %f",&a,&b,&c);
		z=b*b-4*a*c;
		if(z>0) {
		x=(-b+sqrt(z))/(2*a);
                  if(x<0.0001&&x>-0.0001) x=0.00000;
		y=(-b-sqrt(z))/(2*a);
		printf("x1=%.5f;x2=%.5f\n",x,y);};
		if(z==0) {
		f=(-b)/(2*a);
		printf("x1=x2=%.5f\n",f);};
		if(z<0) {
		d=sqrt(-z)/(2*a); 
                  if(b==0) e=0;
		if(b!=0) e=(-b)/(2*a);
                  printf("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n",e,d,e,d);};
	}
}