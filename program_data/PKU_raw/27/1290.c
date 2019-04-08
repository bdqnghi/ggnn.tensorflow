

int main(int argc, char* argv[])
{
     double a,b,c,disc,x1,x2,p,q,N,m;
     scanf("%lf",&N);
	 
	 for(m=1;m<=N;m++){
		 scanf("%lf%lf%lf",&a,&b,&c);
	 disc=b*b-4*a*c;
         if(disc>0){
			 p=-b/(2*a);
             q=sqrt(disc)/(2*a);
             x1=p+q;
			 x2=p-q;
             printf("x1=%.5lf;x2=%.5lf\n",x1,x2);
		 }
     else if(disc==0){
        p=-b/(2*a);
              x1=p;
        printf("x1=x2=%.5lf\n",x1);
     }
     else if(disc<0,b/(2*a)==0){
		 p=b/(2*a);
		 q=sqrt(-disc)/(2*a);
		 x1=p+q;
		 x2=p-q;

		 printf("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n",p,q,p,q);
      }  
	 else{
		 p=-b/(2*a);
		 q=sqrt(-disc)/(2*a);
		 x1=p+q;
		 x2=p-q;

		 printf("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n",p,q,p,q);
      }   
   }
	return 0;
}
