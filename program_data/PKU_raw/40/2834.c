int main()
{   double a,b,c,d,e,s;
    double ss(double a1,double b1,double c1,double d1,double e1);
         scanf("%lf",&a);
	scanf("%lf",&b); 
	scanf("%lf",&c);  
	scanf("%lf",&d);  
         scanf("%lf",&e);
	s=ss(a,b,c,d,e);
    if(s==-1){
		printf("Invalid input");
	}else{
     	         printf("%.4lf",s);
	}
	return 0;
}
    double ss(double a1,double b1,double c1,double d1,double e1)
	{  double S,s,n;
	   s=(a1+b1+c1+d1)/2;
	   e1=PI*e1/360;
	   n=(s-a1)*(s-b1)*(s-c1)*(s-d1)-a1*b1*c1*d1*cos(e1)*cos(e1); 
	   if(n>0){
	   S=sqrt(n);
	   return S;
	   }else if(n<0){
	   return -1;
	   }		
}