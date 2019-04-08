main()
{
      int n;
      scanf("%d",&n);
      double e[100][3];
      int i;
      for(i=0;i<n;i++)
      {
                      scanf("%lf %lf %lf",&e[i][0],&e[i][1],&e[i][2]);
      }
      double a[100][2];
      for(i=0;i<n;i++)
      {
                      if((e[i][1]*e[i][1]-4*e[i][0]*e[i][2])>0)
                      {
                           a[i][0]=(-e[i][1] + sqrt(e[i][1]*e[i][1]-4*e[i][0]*e[i][2]))/(2*e[i][0]);
                           a[i][1]=(-e[i][1] - sqrt(e[i][1]*e[i][1]-4*e[i][0]*e[i][2]))/(2*e[i][0]);
                           printf("x1=%.5lf;x2=%.5lf\n",a[i][0],a[i][1]);
                      }
                      if((e[i][1]*e[i][1]-4*e[i][0]*e[i][2])==0)
                      {
                           a[i][0]=(-e[i][1])/(2*e[i][0]);
                           a[i][1]=(-e[i][1])/(2*e[i][0]);
                           printf("x1=x2=%.5lf\n",a[i][0]);
                      }
                      if((e[i][1]*e[i][1]-4*e[i][0]*e[i][2])<0)     
                      {
                           char c='i'; 
                           double p,q;
                           if(e[i][1]==0)
                           {              
                                p=(e[i][1])/(2*e[i][0]);
                                q=(sqrt(4*e[i][0]*e[i][2]-e[i][1]*e[i][1]))/(2*e[i][0]);
                                printf("x1=%.5lf+%.5lf%c;x2=%.5lf-%.5lf%c\n",p,q,c,p,q,c);
                           }
                           else
                           {
                               p=(-e[i][1])/(2*e[i][0]);
                               q=(sqrt(4*e[i][0]*e[i][2]-e[i][1]*e[i][1]))/(2*e[i][0]);
                               printf("x1=%.5lf+%.5lf%c;x2=%.5lf-%.5lf%c\n",p,q,c,p,q,c);
                           }
                      }
      }
      getchar();
      getchar();
      getchar();
      getchar();
      getchar();
      getchar();
      getchar();
      getchar();
}
   