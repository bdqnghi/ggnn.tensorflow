main()
{ 
      double f; 
      int n,m; 
      scanf("%d",&n); 
      float a[20],b[20],c[20]; 
      for(m=0;m<n;m++)
      { 
         scanf("%f %f %f",&a[m],&b[m],&c[m]); 
      } 
      int i;
      for(i=0;i<n;i++)
      { 
        f=b[i]*b[i]-4*a[i]*c[i]; 
        if(f>=0)
        { 
                double p,q;
                p= (-b[i]+ sqrt(f))/(2*a[i]); 
                q = (-b[i]- sqrt(f))/(2*a[i]); 
                if(p==q) 
                   printf("x1=x2=%.5f\n",p); 
                else 
                   printf("x1=%.5f;x2=%.5f\n",p,q);
        } 
                else 
                { 
                     double d,e;
                     d=sqrt(-f)/(2*a[i]); 
                     e=0-b[i]/(2*a[i]); 
                     printf("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n",e,d,e,d); 
                } 
        } 
}