main()
{     double a,b,c,a1,a2;
      int n,d; 
      d = 1;
      scanf ("%d",&n);
      while (d <= n)      
      {
       scanf ("%lf %lf %lf",&a,&b,&c);
       a1 = -b/(2*a);
       if (a1 == 0)
       a1 = 0;
       else a1 = -b/(2*a);
       if ((b*b-4*a*c)==0)
      {a2 = 0;
      printf ("x1=x2=%.5lf\n",a1);}
       else if ((b*b-4*a*c)<0)
      {a2 = (sqrt ( 4 * a* c-b * b))/(2 * a);
       printf ("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n",a1,a2,a1,a2);}
      else if ((b*b-4*a*c)>0)
      {a2 = (sqrt (b * b - 4 * a* c))/(2 * a);
      printf ("x1=%.5lf;x2=%.5lf\n",a1+a2,a1-a2);} 
      d = d + 1;
     }
}