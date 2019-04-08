main()
{
	int n,i;
	float a,b,c,m,x1,x2;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	  {
	  	scanf("%f %f %f",&a,&b,&c); 
  		m=b*b-4*a*c;
  		if(m==0) printf("x1=x2=%.5f\n",(-b)/(2*a));
  		else  if(m>0) 
  		 {//x1=((-b) + sqrt(b*b-4*a*c))/(2*a);
  		 //x2 = ((-b) - sqrt(b*b-4*a*c))/(2*a);
  		 //printf("x1=%.5f;x2=%.5f\n",x1,x2);
  		 printf("x1=%.5f;x2=%.5f\n",((-b) + sqrt(b*b-4*a*c))/(2*a),((-b) - sqrt(b*b-4*a*c))/(2*a));
  		 
  		 }
 		 else 
 		   {
	       if(b==0)  printf("x1=0.00000+%.5fi;x2=0.00000-%.5fi\n",sqrt(-m)/(2*a),sqrt(-m)/(2*a)); 
		   else  printf("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n",-b/(2*a),sqrt(-m)/(2*a),-b/(2*a),sqrt(-m)/(2*a)); }
  	} 
} 