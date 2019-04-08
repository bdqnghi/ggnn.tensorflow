main()
{
    int n,j=0,i; 
    double a,b,c,x1,x2,p,q,k;  
    
   scanf("%d",&n);  
     
      while(j<n)
        {j++;
        scanf("%lf %lf %lf",&a,&b,&c);
        p=-b/(2.0*a);
        q=sqrt(b*b-4.0*a*c); 
    if(b*b-4.0*a*c!=0.0) 
       { 
         if(b*b-4.0*a*c>0.0) 
           { 
               x1 = (-b + sqrt(b*b-4.0*a*c))/(2.0*a); 
               x2 = (-b - sqrt(b*b-4.0*a*c))/(2.0*a);
                   if(q-0>=0.00001) 
                     printf("x1=%.5f;x2=%.5f\n",x1,x2);
                   else 
                    {
                    if(p<0.00001&&p>-0.00001) printf("x1=x2=0.00000"); 
                    else printf("x1=x2=%.5f\n",p);
                    }
           }
         else 
           {  
              k=(sqrt(4.0*a*c-b*b))/(2*a); 
              if(q-0>=0.00001) 
                printf("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n",p,k,p,k);
              else 
                  if(p<0.00001&&p>-0.00001)  printf("x1=0.00000+%.5fi;x2=0.00000-%.5fi\n",k,k);
                  else  printf("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n",p,k,p,k);
            }
       }         
            
    else 
       {          
           x1=x2=-b/(2.0*a);
           if(p<0.00001&&p>-0.00001) printf("x1=x2=0.00000"); 
           else printf("x1=x2=%.5f\n",x1,x2);
       }        
   }

}