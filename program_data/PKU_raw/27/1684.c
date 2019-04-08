int main()
{
      int n,m;
      scanf("%d",&n);
      double a[500],b[500],c[500],x1,x2,e;
      for(m=1;m<=n;m++)
      {
                       scanf("%lf %lf %lf",&a[m],&b[m],&c[m]);
      }
      for(m=1;m<=n;m++)
      {
                       if((b[m]*b[m]-4*a[m]*c[m])==0)
                       {
                          x1=-b[m]/(2*a[m]),x2=-b[m]/(2*a[m]);
                          printf("x1=x2=%.5f\n",x1);
                       }
                       else if((b[m]*b[m]-4*a[m]*c[m])>0)
                       {
                          x1=(-b[m]+sqrt(b[m]*b[m]-4*a[m]*c[m]))/(2*a[m]);
                          x2=(-b[m]-sqrt(b[m]*b[m]-4*a[m]*c[m]))/(2*a[m]);
                          printf("x1=%.5f;x2=%.5f\n",x1,x2);
                       }
                       else
                          {
                             e=sqrt(-b[m]*b[m]+4*a[m]*c[m])/(2*a[m]);
                             if(b[m]==0)
                             printf("x1=0.00000+%.5fi;x2=0.00000-%.5fi\n",e,e);
                             else
                             {
                             x1=-b[m]/(2*a[m]);
                             printf("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n",x1,e,x1,e);
                             }
                          }
      }
      return 0; 
}
                                                         

                                                   
                                                    
