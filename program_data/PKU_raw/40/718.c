int main()
{
	float a, b, c, d, s;
	double S, m, e;
	scanf("%f%f%f%f", &a, &b, &c, &d);
	scanf("%lf", &e);
    m = (e*3.1415926)/(2*180);
	s = 0.5*(a+b+c+d);
         if((s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos(m)*cos(m)<0 )
         {  
         printf("Invalid input");
         } 
         else
         {
          S = sqrt((s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos(m)*cos(m)); 
           printf("%.4lf", S);
          }
	return 0;
}
