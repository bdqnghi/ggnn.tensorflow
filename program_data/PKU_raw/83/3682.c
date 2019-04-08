int main()
{
	int a,i,e=0;
	double b,c,d,gpa=0;
	int xf[n];
	int cj[n];
	scanf("%d",&a);
	for(i=0;i<a;i++)
	{
		scanf("%d",&(xf[i]));
	}
	for(i=0;i<a;i++)
	{
		scanf("%d",&(cj[i]));
	}
	for(i=0;i<a;i++)
	{
		if (cj[i]<=100&&cj[i]>89){b=4.0;}
		if (cj[i]>84&&cj[i]<90){b=3.7;}
		if (cj[i]>81&&cj[i]<85){b=3.3;}
		if (cj[i]>77&&cj[i]<82){b=3.0;}
		if (cj[i]>74&&cj[i]<78){b=2.7;}
		if (cj[i]>71&&cj[i]<75){b=2.3;}
		if (cj[i]>67&&cj[i]<72){b=2.0;}
		if (cj[i]>63&&cj[i]<68){b=1.5;}
		if (cj[i]>59&&cj[i]<64){b=1.0;}
		if (cj[i]<60){b=0;}
		c=xf[i]*b;
		e=e+xf[i];
		d=d+c;
		

	}
	gpa=d/e;
printf("%.2f",gpa);
return 0;
}