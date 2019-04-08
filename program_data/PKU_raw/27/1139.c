int main()
{
	int n,i;
	double a,b,c,x1,x2,x,y;
	cin>>n;
	for(i=1;i<=n;i++)
	{ cin>>a>>b>>c;
	  float m;
	  m=b*b-4*a*c;
	  if(m==0)
	  {   x=-b/(2*a);
	      cout<<fixed<<setprecision(5)<<"x1=x2="<<x<<endl;
	  }
	  else
	  {   if (m>0)
		  {x1=(-b+sqrt(m))/(2*a);
	       x2=(-b-sqrt(m))/(2*a);
	       cout<<fixed<<setprecision(5)<<"x1="<<x1<<";"<<"x2="<<x2<<endl;
	      }
	      else
	      {if(b==0){x=b/(2*a);
	       y=sqrt(-m)/(2*a);
	       cout<<fixed<<setprecision(5)<<"x1="<<x<<"+"<<y<<"i;x2="<<x<<"-"<<y<<"i"<<endl;
	      }
	      else{x=-b/(2*a);
	       y=sqrt(-m)/(2*a);
	       cout<<fixed<<setprecision(5)<<"x1="<<x<<"+"<<y<<"i;x2="<<x<<"-"<<y<<"i"<<endl;
	      }
	  }
	}
	}
	return 0;}

