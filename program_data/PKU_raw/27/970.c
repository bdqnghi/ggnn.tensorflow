int main()
{int n,i;
double a,b,c,x1,x2,delta,p,q;
cin>>n;
for (i=1;i<=n;i++)
{
cin>>a>>b>>c;
delta=b*b-4*a*c;
if (delta>0)
{x1= (-b + sqrt(delta))/(2*a) ;
 x2 = (-b - sqrt(delta))/(2*a);
 cout<<"x1="<<fixed<<setprecision(5)<<x1<<";"<<"x2="<<fixed<<setprecision(5)<<x2<<endl;
}
if (delta==0)
{x1=(-b)/(2*a);
 cout<<"x1=x2="<<fixed<<setprecision(5)<<x1<<endl;
}
if (delta<0)
{p=(-b)/(2*a);
 q=sqrt(-delta)/(2*a);
 if (b==0)
 {p=0;
 }
 cout<<"x1="<<fixed<<setprecision(5)<<p<<"+"<<fixed<<setprecision(5)<<q<<"i;"<<"x2="<<fixed<<setprecision(5)<<p<<"-"<<fixed<<setprecision(5)<<q<<"i"<<endl;
}
}
return 0;
}