double MyComputeArea();
int main()
{
	double MyQuadrangleArea=0;
	MyQuadrangleArea=MyComputeArea();
	if(MyQuadrangleArea<0)
	{
		printf("Invalid input\n");
	}
	else
	{
		printf("%.4lf\n",MyQuadrangleArea);
	}
	return 0;
}

double MyComputeArea()
{
	double MyQuadrangleArea=0;
	
	double side1=0,side2=0,side3=0,side4=0,angle=0;
	scanf("%lf",&side1);
	scanf("%lf",&side2);
	scanf("%lf",&side3);
	scanf("%lf",&side4);
	scanf("%lf",&angle);

	double MyAngle=angle*PI/180.0;
    //printf("%.4lf\n",MyAngle);
	double s=0;
	s=(side1+side2+side3+side4)/2.0;
	//S = sqrt((s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos2?);
	if((s-side1)*(s-side2)*(s-side3)*(s-side4)-side1*side2*side3*side4*(1+cos(MyAngle))/2>=0)
	{
		MyQuadrangleArea=sqrt((s-side1)*(s-side2)*(s-side3)*(s-side4)-side1*side2*side3*side4*(1+cos(MyAngle))/2);
	}
	else
	{
		return -1;
	}
	return MyQuadrangleArea;
}