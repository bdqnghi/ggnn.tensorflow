main()
{
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {  
       double a,b,c,D,Re,Im,x1,x2;
       scanf("%lf%lf%lf",&a,&b,&c);
       D=b*b-4*a*c;
       if(D>0)
          {
             x1=(0-b+sqrt(D))/(2*a);
             x2=(0-b-sqrt(D))/(2*a);
             printf("x1=%.5lf;x2=%.5lf\n",x1,x2);
          }
       else if(D==0)
          {
             x1=(0-b)/(2*a);
             printf("x1=x2=%.5lf\n",x1);       
          }
         else
          {
            Re=(0-b)/(2*a);
            Im=sqrt(-D)/(2*a);
            printf("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n",Re,Im,Re,Im); 
          }    
    }
}
