
int main()
{
	struct Student
	{
		int ID;
		int Chinese;
		int Math;
		int sum;
	}student[100000]; 
    int i,j,n;
	struct Student t;
	scanf("%d", &n);
    for(i=0;i<n;i++)
		scanf("%d%d%d",&student[i].ID,&student[i].Chinese,&student[i].Math);
	for(i=0;i<3;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(student[i].Chinese+student[i].Math<student[j].Chinese+student[j].Math)
			{
				t=student[i];
				student[i]=student[j];
				student[j]=t;
			}
		}
    }
	for(i=0;i<3;i++)
	{
		printf("%d %d\n",student[i].ID,student[i].Chinese+student[i].Math);
	}
    return 0;
}
