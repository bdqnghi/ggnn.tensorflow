
float GradePoint(int marks)
{
	if(marks>=90&&marks<=100)
		return 4.0;
	else if(marks>=85&&marks<=89)
		return 3.7;
	else if(marks>=82&&marks<=84)
		return 3.3;
	else if(marks>=78&&marks<=81)
		return 3.0;
	else if(marks>=75&&marks<=77)
		return 2.7;
	else if(marks>=72&&marks<=74)
		return 2.3;
	else if(marks>=68&&marks<=71)
		return 2.0;
	else if(marks>=64&&marks<=67)
		return 1.5;
	else if(marks>=60&&marks<=63)
		return 1.0;
	else 
		return 0;

}
void main()
{
	int n,i,count=0;
	int *XueFen,*Marks;
	float GPA=0;
	scanf("%d",&n);
	XueFen=(int*)malloc(sizeof(int)*n);
	Marks=(int*)malloc(sizeof(int)*n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&XueFen[i]);
	}
	for(i=0;i<n;i++)
	{
		scanf("%d",&Marks[i]);
	}

	
	for(i=0;i<n;i++)
	{
		GPA=GPA+XueFen[i]*GradePoint(Marks[i]);
		count+=XueFen[i];
	}
	printf("%3.2f",GPA/count);

	

}