float s(float a, float b, float c, float d, float alpha);

void main()
{
float a, b, c, d, alpha;
scanf("%f%f%f%f%f", &a,&b,&c,&d,&alpha);
if (s(a,b,c,d,alpha)==0)
printf("Invalid input");
else
printf("%.4f", s(a,b,c,d,alpha));
}


float s(float a, float b, float c, float d, float alpha)
{
float S,s, n,r;
s = (a+b+c+d)/2;
r=alpha/2/360*3.1415926*2;
n=(s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos(r)*cos(r);
if (n<0)
return 0;
else
{S = sqrt(n);
return S;
}
}