int main()
{
     double a,b,c,d,s,S,p,t,k;
	 double r;
     scanf("%lf%lf%lf%lf",&a,&b,&c,&d);
	 scanf("%lf",&r);
	 k=r*PI/360;
	 t=cos(k);
     p=pow(t,2);
     s = (a+b+c+d)/2;
	 if(((s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*p)<0)
	 {
		 printf("Invalid input");
	 }

     else  
	 {
		 S = sqrt((s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*p); 

	 printf("%.4lf\n",S);
	 }
	 return 0;
}