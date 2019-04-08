//x1 = (-b + sqrt(b*b-4*a*c))/(2*a) 
//x2 = (-b - sqrt(b*b-4*a*c))/(2*a) 
//??????? ax2 + bx + c = 0 ?????a???0?
int main()
{
	int n,i;
	cin >> n;
	for(i = 1;i<=n;i++)
	{
		double a,b,c,delta,x1,x2;
		cin >> a >>b >> c;
		delta=b*b-4*a*c;
		if(delta >0)
		{
			x1 = (-b + sqrt(b*b-4*a*c))/(2*a) ;
            x2 = (-b - sqrt(b*b-4*a*c))/(2*a);
		    printf("x1=%.5f;x2=%.5f\n",x1,x2);
		}
		else if(delta==0)
		{
			x1=x2=-b/(2*a);
			printf("x1=x2=%.5f\n",x1);
		}
		else
		{
			double antidel=fabs(delta);
			double d,e,f;
			d=(sqrt(antidel))/(2*a);
			f=fabs(d);
			if(b!=0)e=-b/2/a;
			else e=0;
			printf("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n",e,f,e,f);
		}
	}
		return 0;
	}
