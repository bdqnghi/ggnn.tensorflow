int main()
{
    float j(int y);
	float gpa=0,xf=0,g[10],x[10],jd[10];
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%f",&x[i]);
	}
	for(i=0;i<n;i++)
	{
		scanf("%f",&g[i]);
		jd[i]=j(g[i]);
	}
	for(i=0;i<n;i++)
	{
		gpa=gpa+jd[i]*x[i];
		xf=xf+x[i];
	}
	gpa=gpa/xf;
	printf("%.2f\n",gpa);
	return 0;
}

float j(int y)
{
	float z;
	if(y>89) z=4.0;
	else if(y>84) z=3.7;
	else if(y>81) z=3.3;
	else if(y>77) z=3.0;
	else if(y>74) z=2.7;
	else if(y>71) z=2.3;
	else if(y>67) z=2.0;
	else if(y>63) z=1.5;
	else if(y>59) z=1.0;
	else z=0;
	return(z);
}