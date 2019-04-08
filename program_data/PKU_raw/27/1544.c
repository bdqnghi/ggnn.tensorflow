int main()
{    int n,i,j;    
     double x1,x2,s[100][3],a,b,c; 
     scanf("%d",&n);
     for(i=0;i<n;i++)   
     {  for(j=0;j<3;j++) 
         scanf("%lf",&s[i][j]);   
      }    
     for(i=0;i<n;i++) 
     {    a=s[i][0]; 
          b=s[i][1];     
          c=s[i][2]; 
     if(b*b>=4*a*c) 
      {    x1=(-b + sqrt(b*b-4*a*c))/(2*a); 
           x2 = (-b - sqrt(b*b-4*a*c))/(2*a); 
           if(x1==x2)   printf("x1=x2=%.5lf\n",x1);   
           else        
               printf("x1=%.5lf;x2=%.5lf\n",x1,x2);  
      }   
     else 
      {   x1=(-b)/(2*a); if(x1==0) x1=0;        
          x2 =sqrt(4*a*c-b*b)/(2*a);         
          x2=fabs(x2);        
          printf("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n",x1,x2,x1,x2);
       }  
     }      
  return 0;
} 