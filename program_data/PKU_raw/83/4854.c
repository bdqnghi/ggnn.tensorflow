

int main()
{
	double GPA;
	double xf[100];
	double cj[100];
	double jd[100];
	double s[100];
	double p=0;
	double sumxf=0,sumjd=0;
	int i=0,j=0;
	int n;
	double t;
	double a[100];
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
	scanf("%lf",&xf[i]);
	sumxf=sumxf+xf[i];
	
	}
	
	for(i=0;i<n;i++)
	{
	scanf("%lf",&cj[i]);
	t=cj[i];
	if(t>=90)
		jd[i]=4.0;
	else
		{if(t>=85)
			jd[i]=3.7;
		else
			{if(t>=82)
				jd[i]=3.3;
			else
			{if(t>=78)
				jd[i]=3.0;
			else
				{if(t>=75)
					jd[i]=2.7;
				else
					{if(t>=72)
						jd[i]=2.3;
					else
						{if(t>=68)
							jd[i]=2.0;
						else
						{if(t>=64)
							jd[i]=1.5;
						else
							{if(t>=60)
								jd[i]=1;
							else
								jd[i]=0;}}}}}}}}


	}

	for(i=0;i<n;i++)
	{
	s[i]=xf[i]*jd[i];
	p=p+s[i];
	}
	GPA=p/sumxf;

	printf("%.2lf",GPA);

	

return 0;

}



