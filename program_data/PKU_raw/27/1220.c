
int main(int argc, char* argv[])
{
	int n;
	scanf("%d/n",&n);
	double a=0,b=0,c=0;
	for(;n>0;n--){
		scanf("%lf %lf %lf",&a,&b,&c);
	
   double x1 = (-b + sqrt(b*b-4*a*c))/(2*a); 
   double x2 = (-b - sqrt(b*b-4*a*c))/(2*a);
   if((b*b-4*a*c)>0){  
	   printf("x1=%.5f;x2=%.5f\n",x1,x2);}
    else if((b*b-4*a*c)==0){
	   printf("x1=x2=%.5f\n",x2);}
   else if((b*b-4*a*c)<0){

	   if(b!=0){
	   double c1,d1,d2;
		   c1=(-b/(a*2.0));
		   d1=sqrt(4*a*c-b*b)/(2*a);
		   d2=-d1;
		  printf("x1=%.5lf+%.5lfi;x2=%.5lf%.5lfi\n",c1,d1,c1,d2);
   }
    else if(b==0){
	double c2,d3,d4;
	c2=0;
	d3=sqrt(4*a*c-b*b)/(2*a);
		   d4=-d3;
	printf("x1=%.5lf+%.5lfi;x2=%.5lf%.5lfi\n",c2,d3,c2,d4);
	}
	}
};
	   return 0;

}

