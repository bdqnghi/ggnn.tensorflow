
int main(int argc, char* argv[])
{
	int n,i;
	double a,b,c,x1,x2,delt,xr,xc;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%lf%lf%lf",&a,&b,&c);
		delt=b*b-4*a*c;
		if(delt>0)
		{
            x1 = (-b + sqrt(delt))/(2*a); 
            x2 = (-b - sqrt(delt))/(2*a); 
            printf("x1=%.5f;x2=%.5f\n",x1,x2);
		}
		else if(delt==0)
		{
            x1 = (-b + sqrt(delt))/(2*a); 
            x2 = (-b - sqrt(delt))/(2*a); 
			printf("x1=x2=%.5f\n",x1);
		}
		else
		{
            xr=-b/(2*a);
			xc=sqrt(-b*b+4*a*c)/(2*a);
            if(b!=0)
			{printf("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n",xr,xc,xr,xc);}
			else
			{printf("x1=0.00000+%.5fi;x2=0.00000-%.5fi\n",xc,xc);}
		}
	}
	return 0;
}