int main()
{
    int n;
    double d[20];/*????????*/ 
    double e[20];
    double f[20];
    scanf("%d",&n);
    int s,t;
    double a,b,c,x1,x2,y,z;
    for (s=1;s<=n;s++)
      scanf("%lf %lf %lf",&d[s],&e[s],&f[s]);
    for(t=1;t<=n;t++)
      {
      a=d[t];/*?????????*/ 
      b=e[t];
      c=f[t];
      
    if(b*b-4*a*c>=0)
      {
      if(b*b-4*a*c>0)
        {
        x1=(-b + sqrt(b*b-4*a*c))/(2*a);
        x2=(-b - sqrt(b*b-4*a*c))/(2*a);
        printf("x1=%.5lf;x2=%.5lf\n",x1,x2);
        }
      else
        {
        x1=(-b)/(2*a);
        x2=(-b)/(2*a);
        printf("x1=x2=%.5lf\n",x1);
        }
      }
    else
      {
      y=(-b)/(2*a);
      z=sqrt(4*a*c-b*b)/(2*a);
      if (fabs(y)<0.00001) y=0;
      printf("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n",y,z,y,z);
      }
}
getchar();
getchar();
return 0;
}  
    
