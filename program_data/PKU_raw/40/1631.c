float m(float,float,float,float,float);
void main()
{
float a,b,c,d,an,s;
scanf("%f%f%f%f%f",&a,&b,&c,&d,&an);
if(m(a,b,c,d,an)<0)
printf("Invalid input\n");
else 
{s=sqrt(m(a,b,c,d,an));
printf("%.4f\n",s);
}
}


float m(float a,float b,float c,float d,float an)
{float s,e;
e=(a+b+c+d)/2;
s=(e-a)*(e-b)*(e-c)*(e-d)-a*b*c*d*pow(cos(an*3.1415926/360),2);
return s;
}
