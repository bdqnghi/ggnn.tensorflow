/*?????????????????????GPA?????????????????????????????????*/



float gradetogpa(int grade)//?????
{
	float gpa;
	if(grade<=100 && grade>=90) gpa=4.0;
	if(grade<=89 && grade>=85) gpa=3.7;
	if(grade<=84 && grade>=82) gpa=3.3;
	if(grade<=81 && grade>=78) gpa=3.0;
	if(grade<=77 && grade>=75) gpa=2.7;
	if(grade<=74 && grade>=72) gpa=2.3;
	if(grade<=71 && grade>=68) gpa=2.0;
	if(grade<=67 && grade>=64) gpa=1.5;
	if(grade<=63 && grade>=60) gpa=1.0;
	if(grade<60) gpa=0.0;
	return gpa;
}
int main()
{
	float GPA,sumgpa=0;
	int n,i,a[11],b[11],sum=0;
	cin>>n;
	for(i=1;i<=n;i++)//????????
	{
		cin>>a[i];
		sum=sum+a[i];
	}
	for(i=1;i<=n;i++) //????????
	{
		cin>>b[i];
		sumgpa=sumgpa+gradetogpa(b[i])*a[i];
	}
	GPA=sumgpa/sum;
	printf("%.2f\n",GPA);
	return 0;
}
