int main()
{int n,j;
 double a,b,c,x1,x2,t,m,p;
  scanf("%d",&n);
  for(j=1;j<=n;j++)
  { scanf("%lf %lf %lf",&a,&b,&c);	  
  t=b*b-4*a*c;
  m=-b/(2*a);
  if(t>0.0000001)
{ p=sqrt(t)/(2*a);
  x1=m+p;
  x2=m-p;
  printf("x1=%.5lf;x2=%.5lf\n",x1,x2);
  }
 else 
	 if(fabs(t)<=0.0000001)
	 {x1=x2=m;
	 printf("x1=x2=%.5lf\n",x1);
	 }
 else
	 if(t<-0.0000001) 
	 {p=sqrt(-t)/(2*a);
	 printf("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n",m,p,m,p);}
}return 0;
}

