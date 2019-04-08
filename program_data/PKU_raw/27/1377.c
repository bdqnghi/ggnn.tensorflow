int main(int argc, char* argv[])
{
	int i,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{

		double a,b,c,d;
		scanf("%lf%lf%lf",&a,&b,&c);
		d=b*b-4*a*c;
                   if (b==0)
                   {
                       b=(-1)*b;
                    }
		if (d==0)
		{
			printf("x1=x2=%.5lf\n",(-1)*b/(2*a));
		}
		else if (d>0)
		{
			printf("x1=%.5lf;x2=%.5lf\n",((-1)*b+sqrt(d))/(2*a),((-1)*b-sqrt(d))/(2*a));
		}
		else if (d<0)
		{
			printf("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n",(-1)*b/(2*a),sqrt((-1)*d)/(2*a),(-1)*b/(2*a),sqrt((-1)*d)/(2*a));
		}
	}
	
	return 0;
}


