main()
{
      int j,n;
      double q[100],w[100],e[100],a,b,c,p,x1,x2,h,g;
      scanf("%d",&n);
      for(j=0;j<=n-1;j++)
      {
                         scanf("%lf %lf %lf",&q[j],&w[j],&e[j]);
      }
      for(j=0;j<=n-1;j++)
      {
                         a=q[j];
                         b=w[j];
                         c=e[j];
                         p=b*b-4*a*c;
                         if (p>0)
                         {
                                if(b!=0)
                                {
                                x1=(-b+sqrt(p))/(2*a);
                                x2=(-b-sqrt(p))/(2*a);
                                printf("x1=%.5lf;x2=%.5lf",x1,x2);
                                printf("\n");
                                }
                                else
                                printf("x1=%.5lf;x2=-%.5lf",sqrt(p)/(2*a),sqrt(p)/(2*a));
                         }
                         else
                         if (p==0)
                         {
                                 if(b!=0)
                                 {
                                         x1=x2=-b/(2*a);
                                         printf("x1=x2=%.5lf",x2);
                                 }
                                 else
                                 printf("x1=x2=0.00000");
                                 printf("\n");
                         }
                         else
                         {
                             if(b!=0)
                             {
                             
                                     h=-b/(2*a);
                                     g=(sqrt(-p))/(2*a);
                                     printf("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi",h,g,h,g);
                             }
                             else
                             {
                             g=(sqrt(-p))/(2*a);
                             printf("x1=0.00000+%.5lfi;x2=0.00000-%.5lfi",g,g);
                             }
                             printf("\n");
                         }
      }
      getchar();
       getchar(); 
}
