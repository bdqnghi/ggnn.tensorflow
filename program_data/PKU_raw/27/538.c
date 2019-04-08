

int file0()
{float a,b,c;
      scanf("%f%f%f",&a,&b,&c);
          double x1,x2,p,e,f; 
          a=4*a;
          b=4*b;
          c=4*c;
            
            p=b*b-4*a*c;  
            if(p>0) 
           { x1=(-b+sqrt(p))/(2*a); 
             x2=(-b-sqrt(p))/(2*a); 
            
             printf("x1=%.5f;x2=%.5f\n",x1,x2);
            }
            
           else if(p==0) 
           { 
           x1=x2=(-b+sqrt(p))/2*a; 
           printf("x1=x2=%.5f\n",x1);
           
           } 
           else if(p<0)
           {
           e=-b/(2*a);
           f=sqrt(-p)/(2*a);
           if(e==-0)
           e=0;
          
           printf("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n",e,f,e,f);
           
           }  
           
} 
main()
{
      int n,r;
      scanf("%d",&n);
      r=0;
      for(r=0;r<=n;r++)
     { if(r<n)
      
      file0();
      }        
return 0;
}
