main()
{
  int n,i;   
  double  a[999],b[999],c[999],x1,x2,d;
  scanf("%d",&n);
  i=1;  
  
  
  while(i<=n)
    { 
      scanf("%lf %lf %lf",&a[i],&b[i],&c[i]);
      i=i+1;
    } 
    
    
  {
   i=1;   
   for(i=1;i<=n;)
  { if (b[i]!=0)
      {d=b[i]*b[i]-4*a[i]*c[i];
        if(d>0)
          { x1=(-b[i] + sqrt(d))/(2*a[i]);
            x2=(-b[i] - sqrt(d))/(2*a[i]);
            printf("x1=%.5lf;x2=%.5lf\n",x1,x2);
          }     
        if(d==0)
          { x1=-b[i]/(2*a[i]);
            x2=-b[i]/(2*a[i]);
            printf("x1=x2=%.5lf\n",x1);
          }     
        if(d<0)
          { x1=-b[i]/(2*a[i]);
            x2=sqrt(-b[i]*b[i]+4*a[i]*c[i])/(2*a[i]);
            printf("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n",x1,x2,x1,x2);
          } 
        }  
 if (b[i]==0)
   { 
   d=b[i]*b[i]-4*a[i]*c[i];
        if(d>0)
          { x1=(-b[i] + sqrt(d))/(2*a[i]);
            x2=(-b[i] - sqrt(d))/(2*a[i]);
            printf("x1=%.5lf;x2=%.5lf\n",x1,x2);
          }     
        if(d==0)
          { x1=(fabs)(-b[i]/(2*a[i]));
            x2=(fabs)(-b[i]/(2*a[i]));
            printf("x1=x2=%.5lf\n",x1);
          }
        if(d<0)
          { x1=(fabs)(-b[i]/(2*a[i]));
            x2=(fabs)(sqrt(-b[i]*b[i]+4*a[i]*c[i])/(2*a[i]));
            printf("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n",x1,x2,x1,x2);
          } 
       
      }
    i=i+1;
   }
  }
}