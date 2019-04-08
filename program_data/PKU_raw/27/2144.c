

main()
{
      int n,i;
      scanf("%d",&n);
      double a,b,c,d;
  
		
				
	  for (i=1;i<=n;i++)
   		{
        scanf("%lf %lf %lf",&a,&b,&c);
		d=b*b-4*a*c;
       	
		if (d==0)
			printf("x1=x2=%.5lf\n",-b/(2*a));
		else
			{	if (d>0)
			       if ((-b)/(2*a)<0.00001 && ((-b)/(2*a))>-0.00001 )
			          
			          printf("x1=0.00000+%.5lf;x2=0.00000-%.5lf\n",sqrt(d)/(2*a),sqrt(d)/(2*a));
			       else
			           printf("x1=%.5lf;x2=%.5lf\n",(-b+sqrt(d))/(2*a),(-b-sqrt(d))/(2*a));
				else if ((-b)/(2*a)<0.00001&& (-b)/(2*a)>-0.00001 )
			          printf("x1=0.00000+%.5lfi;x2=0.00000-%.5lfi\n",sqrt(-d)/(2*a),sqrt(-d)/(2*a));
			       else
					printf("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n",-b/(2*a),sqrt(-d)/(2*a),-b/(2*a),sqrt(-d)/(2*a));
			}   
		}
   
      
}
