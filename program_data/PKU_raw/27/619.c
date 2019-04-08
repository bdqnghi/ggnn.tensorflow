
int main()
{int n;
float a,b,c,delta,e;
float x1,x2;
int i;
cin>>n;

for (i=0;i<n;i++)
{
	cin>>a>>b>>c;
	e=(b==0)?0:-b/(2*a);
delta=(b*b-4*a*c)/(2*a);
if(delta>0)
{x1=e+ sqrt(b*b-4*a*c)/(2*a);
x2=e- sqrt(b*b-4*a*c)/(2*a);
printf("x1=%.5f;x2=%.5f\n",x1,x2);
}
else if(delta==0)
{
printf("x1=x2=%.5f\n",e);
}
else {
x2= sqrt((-1)*(b*b-4*a*c))/(2*a);
if (e==-0)
	e=0;
printf("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n",e,x2,e,x2);}
}
return 0;
}