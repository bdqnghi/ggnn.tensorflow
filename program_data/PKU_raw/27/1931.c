main()
{
    int n,i,j;
    double a,b,c;
    double x,y;
    scanf("%d",&n);
    float d[n][3];
    for(i=0;i<n;i++)
    {
        scanf("%f %f %f",&d[i][0],&d[i][1],&d[i][2]);
    }
    for(j=0;j<n;j++)
    {
       a=d[j][0];
       b=d[j][1];
       c=d[j][2];
       if((b*b-4*a*c)>0)
       {
           x=(-b+sqrt(b*b-4*a*c))/(2*a);
           y=(-b-sqrt(b*b-4*a*c))/(2*a);
           printf("x1=%.5f;x2=%.5f\n",x,y);
       }
       else if((b*b-4*a*c)==0)
       {
           x=-b/(2*a);
           printf("x1=x2=%.5f\n",x);
       }
       else
       {
          x=-b/(2*a);
          y=sqrt(-b*b+4*a*c)/(2*a);
          if(x==0)
          printf("x1=0.00000+%.5fi;x2=0.00000-%.5fi\n",y,y);
          else
          printf("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n",x,y,x,y);
       }
    }
}
