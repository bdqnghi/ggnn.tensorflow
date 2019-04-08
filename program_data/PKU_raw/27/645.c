int main()
{float a,b,c,delta;
int n,i;
cin>>n;
for(i=1;i<=n;i++)
{cin>>a>>b>>c;
delta=b*b-4*a*c;
if(b!=0)
{
if(delta>0)
{cout<<"x1=";
printf("%.5f", (-b + sqrt(b*b-4*a*c))/(2*a));
cout<<";x2=";
printf("%.5f", (-b - sqrt(b*b-4*a*c))/(2*a));
cout<<endl;
}
if(delta==0)
{cout<<"x1=x2=";
printf("%.5f", (-b - sqrt(b*b-4*a*c))/(2*a));
cout<<endl;
}
if(delta<0)
{delta=-delta;
cout<<"x1=";
printf("%.5f", (-b)/(2*a));
cout<<"+";
printf("%.5f", sqrt(delta)/(2*a));
cout<<"i;x2=";
printf("%.5f", (-b)/(2*a));
cout<<"-";
printf("%.5f", sqrt(delta)/(2*a));
cout<<"i"<<endl;

}
}
else
{
if(delta>0)
{cout<<"x1=";
printf("%.5f", (b + sqrt(b*b-4*a*c))/(2*a));
cout<<";x2=";
printf("%.5f", (b - sqrt(b*b-4*a*c))/(2*a));
cout<<endl;
}
if(delta==0)
{cout<<"x1=x2=";
printf("%.5f", (b - sqrt(b*b-4*a*c))/(2*a));
cout<<endl;
}
if(delta<0)
{delta=-delta;
cout<<"x1=";
printf("%.5f", (b)/(2*a));
cout<<"+";
printf("%.5f", sqrt(delta)/(2*a));
cout<<"i;x2=";
printf("%.5f", (b)/(2*a));
cout<<"-";
printf("%.5f", sqrt(delta)/(2*a));
cout<<"i"<<endl;

}
}
}
return 0;
}