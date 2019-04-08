int main()
{
	float a,b,c,d,e,s,t,h,g,k;
	scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
         s=(a+b+c+d)/2;   
          h=(s-a)*(s-b)*(s-c)*(s-d) ;
		  t= a*b*c*d;
		  g=cos(3.1415926*e/360)*cos(3.1415926*e/360); 
		  k=h-t*g;
		  if(k>0)
			  printf("%.4f\n",sqrt(k));
		  else printf("Invalid input");
		  return 0;
}


