
int main()
{double a,b,c,d,e,f,x1,x2;
int n,t=0;
cin>>n;
for(t=0;t<n;t++)
{cin>>a>>b>>c;
d=b*b-4*a*c;
if(d>0)
{x1=(-b+sqrt(d))/(2*a);
x2=(-b-sqrt(d))/(2*a);
cout<<fixed<<setprecision(5)<<"x1="<<x1<<";x2="<<x2<<endl;
}
else if(d==0)
{x1=(-b)/(2*a);
cout<<fixed<<setprecision(5)<<"x1=x2="<<x1<<endl;
}
else
{e=sqrt(-d)/(2*a);
f=(-b)/(2*a);
if(f==0)
f=fabs(f);
cout<<fixed<<setprecision(5)<<"x1="<<f<<"+"<<e<<"i;x2="<<f<<"-"<<e<<"i"<<endl;}
}
return 0;}
