 main()
{
       double x1,x2,a,b,c;
       int n,i;
       scanf("%d",&n);
       for(i=0;i<n;i++)
       {
               scanf("%lf %lf %lf",&a,&b,&c);
                   if(b*b-4*a*c<0)
                   {    if(b==0)
                      { x1=(sqrt(4*a*c-b*b))/(2*a);
                   
                      printf("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n",b,x1,b,x1);}
                        else
                        {
                            printf("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n",-b/(2*a),(sqrt(4*a*c-b*b))/(2*a),-b/(2*a),(sqrt(4*a*c-b*b))/(2*a));
                            }           }
                   else if(sqrt(b*b-4*a*c)==0)
                   {printf("x1=x2=%.5f\n",(-b)/(2*a));}
                   else
                   {x1 = (-b + sqrt(b*b-4*a*c))/(2*a);
                   x2 = (-b - sqrt(b*b-4*a*c))/(2*a);
                   printf("x1=%.5f;x2=%.5f\n",x1,x2);}
             
               }
       }