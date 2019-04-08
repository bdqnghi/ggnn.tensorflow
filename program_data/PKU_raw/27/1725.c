
int main(int argc, char* argv[])
{
	int n;
	scanf("%d",&n);
	int i=0;
	do{
		double a,b,c;
		scanf("%lf%lf%lf",&a,&b,&c);
       double x1,x2;
		if(b*b-4*a*c>0)
		{{if(b!=0)
		{x1 = (-b + sqrt(b*b-4*a*c))/(2*a);
        x2 = (-b - sqrt(b*b-4*a*c))/(2*a); 
		printf("x1=%.5lf;x2=%.5f\n",x1,x2);}}
		{if(b==0)
		{x1 = (b + sqrt(b*b-4*a*c))/(2*a);
        x2 = (b - sqrt(b*b-4*a*c))/(2*a); 
		printf("x1=%.5lf;x2=%.5f\n",x1,x2);}}}
		if(b*b-4*a*c==0)
		{{if(b!=0)
			{x1=x2=(-b + sqrt(b*b-4*a*c))/(2*a);
		printf("x1=x2=%.5lf\n",x1);}}
		{if(b==0)
			{x1=x2=(-b + sqrt(b*b-4*a*c))/(2*a);
		printf("x1=x2=%.5lf\n",x1);}}}
		if(b*b-4*a*c<0)
		{{if(b!=0)
		{double e,f;
		e=sqrt(4*a*c-b*b)/(2*a);
		f=sqrt(4*a*c-b*b)/(2*a);
		x1=-b/(2*a);
		printf("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n",x1,e,x1,f);}}
		{if(b==0)
			{double e,f;
		e=sqrt(4*a*c-b*b)/(2*a);
		f=sqrt(4*a*c-b*b)/(2*a);
		x1=b/(2*a);
		printf("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n",x1,e,x1,f);}}}

		i++;
	}while(i<n);
	return 0;
}