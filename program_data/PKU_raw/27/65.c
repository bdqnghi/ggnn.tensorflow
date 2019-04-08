int main()
{
	short task_number,i;
	double a,b,c,x1,x2,delta,real,image;
	scanf("%d",&task_number);
	for(i=1;i<=task_number;i++)
	{
		scanf("%lf%lf%lf",&a,&b,&c);
		delta=b*b-4.0*a*c;
		if(fabs(delta)<1E-5)
		{
			x1=-b/(2.0*a);
			if(fabs(x1)<1E-5)	x1=0.0;
			printf("x1=x2=%.5lf\n",x1);
		}
		else
		{
			if(delta>0)
			{
				x1=(-b+sqrt(delta))/(2*a);  if(fabs(x1)<1E-5)	x1=0.0;
				x2=(-b-sqrt(delta))/(2*a);  if(fabs(x2)<1E-5)	x2=0.0;
				printf("x1=%.5lf;x2=%.5lf\n",x1,x2);
			}
			else
			{
				real=-b/(2*a);
				if(fabs(real)<1E-5)		real=0.0;	
				image=sqrt(-delta)/(2*a);
				if(fabs(image)<1E-5)	image=0.0;
				printf("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n",real,image,real,image);
			}
		}
	}
	return(0);
}




