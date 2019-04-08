

int main(){
	int n;
	scanf("%d",&n);
    int j;
	for(j=1;j<=n;j++){
		double a1,b1,c1,x1,x2,m;
	    scanf("%lf%lf%lf",&a1,&b1,&c1);
         m=b1*b1-4*a1*c1;
		 if(m>0){
        x1 = (-b1 + sqrt(b1*b1-4*a1*c1))/(2*a1); 
        x2 = (-b1 - sqrt(b1*b1-4*a1*c1))/(2*a1);
        printf("x1=%.5f;x2=%.5f\n",x1,x2);}
		 if(m==0){
			 x1=(-b1)/(2*a1);
			printf("x1=x2=%.5f\n",x1);}	 
       if(m<0){
	   double y1,y2;
       y1 = (-b1)/(2*a1); 
       y2 = (sqrt(-m))/(2*a1);
      if(b1==0.00000){
       printf("x1=%.5f+%.5fi;",-y1,y2);
       printf("x2=%.5f-%.5fi\n",-y1,y2);}
	   else{ printf("x1=%.5f+%.5fi;",y1,y2);
       printf("x2=%.5f-%.5fi\n",y1,y2);}
             }

	}
        
	return 0;
}
