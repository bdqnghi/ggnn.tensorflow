int main(int argc, char* argv[])
{ int n,i;
  
  scanf("%d\n",&n);
  struct{
	  double a,b,c;
  }xs[100];
  for(i=0;i<n;i++){
	  scanf("%lf %lf %lf\n",&xs[i].a,&xs[i].b,&xs[i].c);
  }
  for(i=0;i<n;i++){
	  double a1,b1,c1;
	  a1=xs[i].a;
	  b1=xs[i].b;
	  c1=xs[i].c;
	  if((b1*b1-4*a1*c1)>0){
		  double x1,x2;
		  x1=(-b1+sqrt(b1*b1-4*a1*c1))/(2*a1);
		  x2=(-b1-sqrt(b1*b1-4*a1*c1))/(2*a1);
		  printf("x1=%.5lf;x2=%.5lf\n",x1,x2);
	  }
	  if((b1*b1-4*a1*c1)==0){
		  double x1,x2;
		  x1=x2=(-b1)/(2*a1);
		  printf("x1=x2=%.5lf\n",x1);
	  }
	  if((b1*b1-4*a1*c1)<0){
		  double t1,t2;
		  t1=(-b1)/(2*a1);
          t2=sqrt(4*a1*c1-b1*b1)/(2*a1);
		  if(t1==-0.00000)
			  printf("x1=0.00000+%.5lfi;x2=0.00000-%.5lfi\n",t2,t2);
		  else {
		      printf("x1=%.5lf+%.5lfi;",t1,t2);
		      printf("x2=%.5lf-%.5lfi\n",t1,t2);
		  }
	  }
  }

	return 0;
}

