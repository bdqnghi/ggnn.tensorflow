    int main(){
      double a,b,c,d,e,s,M,S;
      scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&e);
      s = (a+b+c+d)/2;
	  M=(s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(e*3.1415926/360)*cos(e*3.1415926/360);
	  S = sqrt((s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(e*3.1415926/360)*cos(e*3.1415926/360));
	  
	  if(M<0){
		  printf("Invalid input");  }
		  else {if (M>=0){
		S = sqrt((s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(e*3.1415926/360)*cos(e*3.1415926/360));  
		printf("%.4lf\n",S);}}
     return 0;
}
      