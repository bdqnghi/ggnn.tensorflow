main()
{
      float a,b,c,disc;
      double x1,x2,realpart,imagpart;
      int i,n;
      scanf("%d",&n);
      for(i=1;i<=n;i=i+1)
      {
      scanf("%f%f%f",&a,&b,&c);
      disc=b*b-4*a*c;
      if(fabs(disc)<=1e-6)
        printf("x1=x2=%.5f\n",-b/(2*a)+0);
        else
          
          if(disc>1e-6)
          {
          realpart=-b/(2*a)+0;
          imagpart=sqrt(disc)/(2*a);
           x1=realpart+imagpart;
           x2=realpart-imagpart;          
           if(fabs(x1)<=1e-6) 
           printf("x1=%.5f;x2=%.5f\n",fabs(x1),x2);            
            else
            printf("x1=%.5f;x2=%.5f\n",x1,x2);  
          
          }
          else
          {
          realpart=-b/(2*a)+0;
          imagpart=sqrt(-disc)/(2*a);
          printf("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n",realpart,imagpart,realpart,imagpart);
         
          }    
          }   
          }
