void main()
{
    float gpa(int point);
    int point[11],mark[11];
    float gpax[11];
    int i,k,sum;
    float summ;
    scanf("%d",&k);
    sum=0;summ=0;
    for(i=1;i<=k;i++)
    {
    	scanf("%d",&mark[i]);
    	sum=sum+mark[i];
    }
    for(i=1;i<=k;i++)
    {
    	scanf("%d",&point[i]);
    	gpax[i]=gpa(point[i]);
    	summ=summ+((float)mark[i])*(gpax[i]);
    }
    printf("%.2f\n",summ/sum);
}

float gpa(int point)
{
	float gpa;
	if(point<60) gpa=0;
	else if(point<64) gpa=1.0;
	else if(point<68) gpa=1.5;
	else if(point<72) gpa=2.0;
	else if(point<75) gpa=2.3;
	else if(point<78) gpa=2.7;
	else if(point<82) gpa=3.0;
	else if(point<85) gpa=3.3;
	else if(point<90) gpa=3.7;
	else gpa=4.0;
	return(gpa);
}