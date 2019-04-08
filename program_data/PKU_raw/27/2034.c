main()
{
      double a,b,c;
      int i=1,d;
      scanf("%d",&d);
      for (i;i<=d;i++)
      {
        scanf("%lf %lf %lf",&a,&b,&c);
        if (b*b-4*a*c>0)
        {printf("x1=%.5f;x2=%.5f\n",(0-b + sqrt(b*b-4*a*c))/(2*a),(0-b - sqrt(b*b-4*a*c))/(2*a));
       }    
        if (b*b-4*a*c==0)
        {printf("x1=x2=%.5f\n",-b /(2*a));
       }
        if (b*b-4*a*c<0)
        {printf("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n",0-b/(2*a) , sqrt(4*a*c-b*b)/(2*a),0-b/(2*a) , sqrt(4*a*c-b*b)/(2*a));
       }
      }
}
