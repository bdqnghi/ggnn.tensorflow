int main(){
 double d[20][3];
 int n,i;
 scanf("%d", &n);
 
 for(i=0;i<n;i++){
  double a,b,c;
 scanf("%lf %lf %lf" , &a,&b,&c);
  d[i][0]=a;
  d[i][1]=b;
  d[i][2]=c;
 }
 for(i=0;i<n;i++){
  double a,b,c;
  double p;
  a=d[i][0];
  b=d[i][1];
  c=d[i][2];
  
  p=b*b-4*a*c;
  if(p==0) {if (b==0)  printf("x1=x2=%.5lf\n" ,abs((-b)/(2*a)));
	 else printf("x1=x2=%.5lf\n" ,(-b)/(2*a));
  }
  if(p>0)  printf("x1=%.5lf;x2=%.5lf\n",(-b+sqrt(p))/(2*a),(-b-sqrt(p))/(2*a));
  if(p<0)  {if (b==0)   printf("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n" , (b)/(2*a), sqrt(-p)/(2*a),(b)/(2*a),sqrt(-p)/(2*a));
 else  printf("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n" , (-b)/(2*a), sqrt(-p)/(2*a),(-b)/(2*a),sqrt(-p)/(2*a));
  }
 }
 return 0;
}
