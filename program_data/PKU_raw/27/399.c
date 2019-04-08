int main()
{
    int n;
    cin>>n;//?????????
    int i;
    double a,b,c;
    double x1,x2;
    for(i=0;i<n;i++)
      {
          cin>>a>>b>>c;
          if(b*b-4*a*c>0)//??????0?????????
          {
              x1 = (-b + sqrt(b*b-4*a*c))/(2*a) ;
              x2 = (-b - sqrt(b*b-4*a*c))/(2*a) ;
              printf("x1=%.5f;x2=%.5f\n",x1,x2);
          }
          else if(b*b-4*a*c==0)//?????0???????
           {
               x1 = (-b + sqrt(b*b-4*a*c))/(2*a) ;
               printf("x1=x2=%.5f\n",x1);
           }
           else if(b*b-4*a*c<0)//?????0??????????
           {
               if(fabs(b)<1e-6)   //b?0?????????
               printf("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n",(b)/(2*a), sqrt(4*a*c-b*b)/(2*a),(b)/(2*a), sqrt(4*a*c-b*b)/(2*a));
               else
                printf("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n",(-b)/(2*a), sqrt(4*a*c-b*b)/(2*a),(-b)/(2*a), sqrt(4*a*c-b*b)/(2*a));
            }
      }
}
