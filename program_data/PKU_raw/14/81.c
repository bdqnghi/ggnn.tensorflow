struct student
{
	int id;
	int math_grade;
	int chi_grade;
	int sum;
}stu[100000];
void main()
{
	int i,j,n,max,temp1,temp2;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&stu[i].id);
		scanf("%d",&stu[i].math_grade);
		scanf("%d",&stu[i].chi_grade);
	}
	for(i=0;i<n;i++)
	stu[i].sum=stu[i].math_grade+stu[i].chi_grade;
	for(i=0;i<3;i++)
	{
		max=stu[i].sum;
		for(j=i+1;j<n;j++)
		{
           if(stu[j].sum>max)
		   {
			   temp1=stu[i].id;
               stu[i].id=stu[j].id;
               stu[j].id=temp1;
			   temp2=stu[i].sum;
               stu[i].sum=stu[j].sum;
               stu[j].sum=temp2;
			   max=stu[i].sum;
		   }        
		}
	}
	for(i=0;i<2;i++)
		printf("%d %d\n",stu[i].id,stu[i].sum);
	printf("%d %d",stu[2].id,stu[2].sum);
}