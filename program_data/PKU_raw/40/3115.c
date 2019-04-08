main()
{
      float a,b,c,d;
      float n;
      scanf("%f",&a);
      scanf("%f",&b);
      scanf("%f",&c);
      scanf("%f",&d);
      scanf("%f",&n);
      
      float s;
      float h=180;
      s=(a+b+c+d)/2;
      h=n/180*3.1415926;
        float S;
      
      if((s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos((double)h/2)*cos((double)h/2)<0)
    {  printf("Invalid input"); }
       else
       {
           S=sqrt((s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos((double)h/2)*cos((double)h/2));
       printf("%.4f",S);
       }
       
       }
