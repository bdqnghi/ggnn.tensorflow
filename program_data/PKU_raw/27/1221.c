
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
	   double c1,d1,d2;
		   c1=(double)(-b/(a*2));
		   d1=sqrt(4*a*c-b*b)/(2*a);
		   d2=-d1;
		   if(c1==-0){
		   printf("x1=%.5lf+%.5lfi;x2=%.5lf%.5lfi\n",-c1,d1,-c1,d2);}
		   else {printf("x1=%.5lf+%.5lfi;x2=%.5lf%.5lfi\n",c1,d1,c1,d2);}}}
	   return 0;

}