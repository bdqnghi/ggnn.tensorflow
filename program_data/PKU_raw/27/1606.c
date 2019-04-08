
int main(int argc, char* argv[])
{
	int n;
	scanf("%d",&n);
	int m;
	double a,b,c,x1,x2,dt,xubu,shibu;
	for (m=1;m<n+1;m++)
	{
		scanf("%lf""%lf""%lf",&a,&b,&c);
		dt=b*b-4*a*c;
		if (dt>0)
		{
			x1=(-b+sqrt(dt))/(a*2);
                            x2=(-b-sqrt(dt))/(a*2);
			printf("x1=%.5lf;x2=%.5lf\n",x1,x2);
		}
		else if (dt==0)
		{
			x1=(-b)/(a*2);
			printf("x1=x2=%.5lf\n",x1);
		}
		else if (dt<0)
		{
			xubu=(sqrt(-dt))/(2*a);
			shibu=(-b)/(a*2);
                            if(shibu==0)
                            {
              printf("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n",-shibu,xubu,-shibu,xubu);
		}
else if(shibu==-0)
{printf("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n",-shibu,xubu,-shibu,xubu);}
else
{
printf("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n",shibu,xubu,shibu,xubu);}



	}
}

			



	return 0;
}

