main()
{
      int n,q;
      scanf("%d",&n); 
      double p[n][3];
      int j;
      for(j=0;j<n;j++)
      {
      scanf("%lf %lf %lf",&p[j][0],&p[j][1],&p[j][2]);
      }
      for(q=0;q<n;q++)
      {
      double a,b,c,x1,x2,d,e;
      a=p[q][0];b=p[q][1];c=p[q][2];
      if(b*b-4*a*c>0)
      {x1 = (-b + sqrt(b*b-4*a*c))/(2*a);
       x2 = (-b - sqrt(b*b-4*a*c))/(2*a);
       printf("x1=%.5f;x2=%.5f\n",x1,x2);
                     }
       else
       {if(b*b-4*a*c==0)
       {
       x1=-b/(2*a);
       x2=-b/(2*a);
       printf("x1=x2=%.5f\n",x1);
       }
       else
       {
       d=0-b/(2*a);
       e=(sqrt(4*a*c-b*b))/(2*a);
       printf("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n",d,e,d,e);
       }
       }
      }
        }
