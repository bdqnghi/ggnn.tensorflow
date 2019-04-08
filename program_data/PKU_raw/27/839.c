main()
{
      int n,i;
      float a[1000],gen,pan,p,q;
      scanf("%d",&n);
      for(i=0;i<n;i++)
        {
              scanf("%f%f%f",&a[3*i],&a[3*i+1],&a[3*i+2]);
             
        }  
            for(i=0;i<n;i++)
      {
           pan=a[3*i+1]*a[3*i+1]-4*a[3*i]*a[3*i+2];
           if(fabs(pan)<=0.00001)
              printf("x1=x2=%.5f\n",-a[3*i+1]/(2*a[3*i]));
           gen=sqrt(fabs(pan));
           p=-a[3*i+1]/(2*a[3*i]),q=gen/(2*a[3*i]);
           if(fabs(p)<=0.000001)
                  p=0.00000;
           if(pan>0.00001)
              printf("x1=%.5f;x2=%.5f\n",p+q,p-q);
           if(pan<-0.00001)
              printf("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n",p,q,p,q);
      }
      //printf("%f%f%f",a[0],a[1],a[2]);
      
      
}             