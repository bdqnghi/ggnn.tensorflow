
int main(int argc, char* argv[])
{    double a,b,c,d;
     double m,n;
	 double e,s;
	 
     scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&m);
	 e=(a+b+c+d)/2;
	 n=3.1415926*m/360;
	 if((e-a)*(e-b)*(e-c)*(e-d)-a*b*c*d*pow(cos(n),2)<0)
	 {
		 printf("Invalid input");
	 }
	 else{
	 s=sqrt((e-a)*(e-b)*(e-c)*(e-d)-a*b*c*d*pow(cos(n),2));
	 
	 printf("%.4f",s);
	 }




	return 0;
}

