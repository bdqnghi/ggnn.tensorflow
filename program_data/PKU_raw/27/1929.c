int main()
{
int n,m;
double a,b,c,x1,x2,i;
cin>>n;
for(m=1;m<=n;m++)//?????
{ cin >>a>>b>>c;
     if((b*b-4*a*c)>0)//???????
     {
    	 x1 = (-b + sqrt(b*b-4*a*c))/(2*a) ;
         x2 = (-b - sqrt(b*b-4*a*c))/(2*a);
         cout<<fixed<<setprecision(5)<<"x1"<<"="<<x1<<";"<<"x2"<<"="<<x2<<endl;
     }
     if((b*b-4*a*c)==0)//???????
    {
    	x1=x2=(-b) /(2*a);
    	cout<<fixed<<setprecision(5)<<"x1"<<"="<<"x2"<<"="<<x2<<endl;
	   }
     if((b*b-4*a*c)<0)//???????
      {
    	 x1=x2=(-b) /(2*a);
    	 i=fabs(sqrt(4*a*c-b*b)/(2*a));
    	 if (x1>(-0.000001)&& x2<0.000001)x1=x2=0;
    	cout<<fixed<<setprecision(5)<<"x1"<<"="<<x1<<"+"<<i<<"i"<<";"<<"x2"<<"="<<x2<<"-"<<i<<"i"<<endl;
      }
}
 return 0;
  }