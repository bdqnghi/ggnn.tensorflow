

main ()
{ int n,i; 
  
  double a[100],b[100],c[100],delta,x1,x2,x_a,x_b;
  scanf ("%d",&n);
  for (i=1;i<=n;i++)
  {
  scanf("%lf %lf %lf",&a[i],&b[i],&c[i]);
  delta=b[i]*b[i]-4*a[i]*c[i];
  if (delta > 0)
  {x1 = (-b[i] + sqrt(b[i]*b[i]-4*a[i]*c[i]))/(2*a[i]) ;
  x2 = (-b[i] - sqrt(b[i]*b[i]-4*a[i]*c[i]))/(2*a[i]) ;
  printf("x1=%.5lf;x2=%.5lf\n",x1,x2);} 

  else if (delta == 0)
  {x1 = (-b[i])/(2*a[i]);
  printf("x1=x2=%.5lf\n",x1);} 
  
  else
  {x_a = (-b[i])/(2*a[i]);
  x_b =  sqrt(-delta)/(2*a[i]);
  if (x_a == -0) 
  {x_a = 0;} 
  printf("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n",x_a,x_b,x_a,x_b);
  } 

  
  }
     
     
}