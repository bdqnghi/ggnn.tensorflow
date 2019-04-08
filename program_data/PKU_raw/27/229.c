main()
{
    int n,i;
    double a[100],b[100],c[100],d,x1,x2;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%lf %lf %lf",&a[i],&b[i],&c[i]);
    }
    for(i=1;i<=n;i++)
    {
        if((b[i]*b[i]-4*a[i]*c[i])>=0)
        {d=sqrt(b[i]*b[i]-4*a[i]*c[i]);
         if(d<=0.0000001&&d>=-0.0000001)
         {x1=(-b[i])/(2*a[i]);
          printf("x1=x2=%.5f\n",x1);}
         else
          {x1=(-b[i]+d)/(2*a[i]);
           x2=(-b[i]-d)/(2*a[i]);
           printf("x1=%.5f;x2=%.5f\n",x1,x2);}}
        else
          {d=sqrt(-b[i]*b[i]+4*a[i]*c[i]);
           printf("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n",0-b[i]/(2*a[i]),d/(2*a[i]),0-b[i]/(2*a[i]),d/(2*a[i]));}
    }
}
