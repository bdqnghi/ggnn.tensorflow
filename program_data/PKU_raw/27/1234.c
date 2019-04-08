int main()
{
      float a,b,c,n,p,q,l;
      scanf("%f",&n);      
      float i=1;
      while (i<=n)
      {
            scanf ("%f %f %f\n",&a,&b,&c);
            l=b*b-4*a*c;
            if (b!=0) 
                  p=-b/(2*a);
            else
                  p=b/(2*a);

            if (l<0)
             {
               q=sqrt(-l)/(2*a);
               printf ("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n",p,q,p,q);
               }
            else 
              {
                 q=sqrt(l)/(2*a);
                 if (p+q==p-q)
                    printf ("x1=x2=%.5f\n",p);
                  else
                    printf ("x1=%.5f;x2=%.5f\n",(p+q),(p-q));
                  }               
             i++;
           }
}
              