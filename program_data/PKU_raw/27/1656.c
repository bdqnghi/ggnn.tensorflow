int  main()
{
  int i,n;
  float a,b,c;
  double x1,x2,d,e;
  scanf("%d",&n);
  for (i=1;i<=n;i++)
 {scanf("%f %f %f",&a,&b,&c);
 d=b*b-4*a*c;
if (b==0)
{if(d>0)
  {x1 = (sqrt(b*b-4*a*c))/(2*a);
   x2 = (- sqrt(b*b-4*a*c))/(2*a);      

 printf("x1=%.5f;x2=%.5f\n",x1,x2);}
    else
   {
    if(d==0)
    {
    x1=(sqrt(b*b-4*a*c))/(2*a);
    printf("x1=x2=%.5f\n",x1);
    }

    else 
    {e=sqrt(-d)/(-2*a);
    
  if(e>0)
    printf("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n",b,e,b,e);
    else
     printf("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n",b,-e,b,-e);
}
}
  }




else{
if(d>0)
  {x1 = (-b + sqrt(b*b-4*a*c))/(2*a);
   x2 = (-b - sqrt(b*b-4*a*c))/(2*a);      

 printf("x1=%.5f;x2=%.5f\n",x1,x2);}
    else
   {
    if(d==0)
    {
    x1=(-b + sqrt(b*b-4*a*c))/(2*a);
    printf("x1=x2=%.5f\n",x1);
    }
    else 
    {e=sqrt(-d)/(-2*a);
    
  if(e>0)
    printf("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n",-b/(2*a),e,-b/(2*a),e);
    else
     printf("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n",-b/(2*a),-e,-b/(2*a),-e);
}
}
  }
}
}

