int main()
{
	int a,sum=0,i,j,k,m;
	double SUM;
	scanf("%d",&a);
	int credit[ECO];
	int point[ECO];
	double gpa[ECO];
	for(i=0;i<a;i++)
	{
		scanf("%d",&(credit[i]));
		sum=sum+credit[i];
		
	}
	for(j=0;j<a;j++)
	{
		scanf("%d",&(point[j]));
	}
	for(k=0;k<a;k++)
	{
		if(point[k]>=90)
			gpa[k]=4.0*credit[k];
		else if(point[k]>=85)
			gpa[k]=3.7*credit[k];
		else if(point[k]>=82)
			gpa[k]=3.3*credit[k];
		else if(point[k]>=78)
			gpa[k]=3.0*credit[k];
		else if(point[k]>=75)
			gpa[k]=2.7*credit[k];
		else if(point[k]>=72)
			gpa[k]=2.3*credit[k];
		else if(point[k]>=68)
			gpa[k]=2.0*credit[k];
		else if(point[k]>=64)
			gpa[k]=1.5*credit[k];
		else if(point[k]>=60)
			gpa[k]=1.0*credit[k];
		else
			gpa[k]=0*credit[k];
	}
	for(m=0,SUM=0;m<a;m++)
	{
		SUM=SUM+gpa[m];
	}
	printf("%.2lf",1.0*SUM/sum);
	return 0;
}
