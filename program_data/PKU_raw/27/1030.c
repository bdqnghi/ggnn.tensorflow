int main()
{
    double i,n,x1,x2;
    float a,b,c,x,y;
    cin>>n;
    for(i=1;i<=n;i++)
{     cin>>a>>b>>c;
     if(b==0)
{    
     if((b*b-4*a*c)>0)
{     x1 = (b + sqrt(b*b-4*a*c))/(2*a); 
      x2 = (b - sqrt(b*b-4*a*c))/(2*a);
     
      printf("x1=%.5f;",x1);
      printf("x2=%.5f\n",x2);
}
      else if((b*b-4*a*c) == 0)
{     x1 = (b + sqrt(b*b-4*a*c))/(2*a); 
      x2 = (b - sqrt(b*b-4*a*c))/(2*a);
      printf("x1=x2=%.5f\n",x1);
}
      else
{
      x = (b /(2*a)); 
      y = (sqrt(-b*b+4*a*c))/(2*a);
      printf("x1=%.5f+%.5fi;",x,y);
      printf("x2=%.5f-%.5fi\n",x,y);
}
 }
     else
     {    
     if((b*b-4*a*c)>0)
{     x1 = (-b + sqrt(b*b-4*a*c))/(2*a); 
      x2 = (-b - sqrt(b*b-4*a*c))/(2*a);
     
      printf("x1=%.5f;",x1);
      printf("x2=%.5f\n",x2);
}
      else if((b*b-4*a*c) == 0)
{     x1 = (-b + sqrt(b*b-4*a*c))/(2*a); 
      x2 = (-b - sqrt(b*b-4*a*c))/(2*a);
      printf("x1=x2=%.5f\n",x1);
}
      else
{
      x = (-b /(2*a)); 
      y = (sqrt(-b*b+4*a*c))/(2*a);
      printf("x1=%.5f+%.5fi;",x,y);
      printf("x2=%.5f-%.5fi\n",x,y);
}
}
}
       return 0;
}