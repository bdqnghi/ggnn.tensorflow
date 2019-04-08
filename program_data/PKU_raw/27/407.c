main()
{
      int n,i;
      float a,b,c,delta;
      scanf("%d",&n);
      for(i=0;i<n;i++)
      {
          scanf("%f %f %f",&a,&b,&c);
          delta=b*b-4*a*c;
          if(fabs(delta)<1e-8)
          { if(fabs(b)<1e-8)
              printf("x1=x2=%.5f\n",-b/(2*a)+1e-8);
            else
              printf("x1=x2=%.5f\n",-b/(2*a));}
          if(delta>1e-8)
            printf("x1=%.5f;x2=%.5f\n",(-b+sqrt(delta))/(2*a)+1e-8,(-b-sqrt(delta))/(2*a)+1e-8);
          if(delta<-1e-8)
          {
            if(a>0)
            { if(fabs(b)<1e-8)
                printf("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n",-b/(2*a)+1e-8,sqrt(-delta)/(2*a),-b/(2*a)+1e-8,sqrt(-delta)/(2*a));
              else printf("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n",-b/(2*a),sqrt(-delta)/(2*a),-b/(2*a),sqrt(-delta)/(2*a));}
            else
            { if(fabs(b)<1e-8)
                printf("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n",-b/(2*a)+1e-8,-sqrt(-delta)/(2*a),-b/(2*a)+1e-8,-sqrt(-delta)/(2*a));
              else printf("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n",-b/(2*a),-sqrt(-delta)/(2*a),-b/(2*a),-sqrt(-delta)/(2*a));}
          }
      }
    
      return 0;
}
