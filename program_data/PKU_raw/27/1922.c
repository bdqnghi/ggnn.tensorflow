int main()
{ double a,b,c,x1,x2,t1,t2;
  int i,j,n;
    scanf("%d",&n);
  for(i=1;i<n+1;i++)
    {scanf ("%lf %lf %lf",&a,&b,&c);
     
   x1 = (-b + sqrt(b*b-4*a*c))/(2*a); 
   x2 = (-b - sqrt(b*b-4*a*c))/(2*a);
   if (b*b-4*a*c<0) printf("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n",-b/(2*a)+0,sqrt(-(b*b-4*a*c))/(2*a),-b/(2*a)+0,sqrt(-(b*b-4*a*c))/(2*a));
   else
   if (x1==x2) printf("x1=x2=%.5f\n",x1); 
   else 
     printf("x1=%.5f;x2=%.5f\n",x1,x2);
}
 
   return 0;
}
