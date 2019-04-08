main()
{
   int n,i,j;
   double s,c,d,e;
   float t;
   scanf("%d",&n);
   float a[n][3];
   for(i=0;i<=(n-1);i++)
   {
     for(j=0;j<=2;j++)
     {
       scanf("%f",&t);
       a[i][j]=t;
      } 
   }
   for(i=0;i<=(n-1);i++)
   {                   
     s=a[i][1]*a[i][1]-4*a[i][0]*a[i][2];
     if(s>1e-6)  
     {
     c = (-a[i][1] + sqrt(s))/(2*a[i][0]); 
     d = (-a[i][1] - sqrt(s))/(2*a[i][0]);
     if(fabs(c)<1e-6)c=0.00000;
     if(fabs(d)<1e-6)c=0.00000;
     printf("x1=%0.5f;x2=%0.5f\n",c,d);
     }
     else if(fabs(s)<1e-6)
     {
       c=-a[i][1]/(2*a[i][0]);
       if(fabs(c)<1e-6)c=0.00000;
       printf("x1=x2=%.5f\n",c);
     } 
     else
     {
       c=sqrt(-s)/(2*a[i][0]);
       if(fabs(a[i][1])>1e-6)d=-a[i][1]/(2*a[i][0]);
       else d=0.00000;
       if(c<1e-6)printf("x1=%.5f%.5fi;x2=%.5f+%.5fi\n",d,c,d,-c);
       else printf("x1=%.5f+%.5fi;x2=%.5f%.5fi\n",d,c,d,-c);
     }    
    }            
     getchar();
     getchar();
     getchar();
     getchar();
}                                            
   
      
