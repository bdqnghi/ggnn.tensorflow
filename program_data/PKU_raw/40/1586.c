double s,final;
void main()
{
        double a,b,c,d,aa;
        void four(double,double,double,double,double,double);
        scanf("%lf",&a);
        scanf("%lf",&b);
        scanf("%lf",&c);
        scanf("%lf",&d);
        scanf("%lf",&aa);
        s=(a+b+c+d)/2;
        aa=aa/360*3.1415926;
		four(a,b,c,d,s,aa);
		

}

void four(double a,double b,double c,double d,double ss, double angle)
{
	    double w;
		w=(ss-a)*(ss-b)*(ss-c)*(ss-d)-a*b*c*d*cos(angle)*cos(angle);
        if(w<0)
			printf("Invalid input");
		else printf("%.4lf",sqrt(w));;
		
}