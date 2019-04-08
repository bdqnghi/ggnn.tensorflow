


struct person
{
	int num;
	int chinese;
	int math;
	int total;
}student[110000];

int main()
{
	int n, i, max1=0, count1=0, max2=0, count2=0, max3=0, count3=0, number=0, sum=0;
	scanf("%d", &n);
	for(i=0; i<n; i++)
	{
		scanf("%d", &student[i].num);
		scanf("%d", &student[i].chinese);
		scanf("%d", &student[i].math);
	}
	for(i=0; i<n; i++)
	{
		student[i].total=student[i].chinese+student[i].math;
	}
	for(i=n-1; i>=0; i--)
	{
		if(student[i].total>=max1)
		{
			max1=student[i].total;
			count1=i;
		}
	}
	number=student[0].num;
	sum=student[0].total;
	student[0].num=student[count1].num;
	student[0].total=student[count1].total;
	student[count1].num=number;
	student[count1].total=sum;
	number=0;
	sum=0;
	for(i=n-1; i>=1; i--)
	{
		if(student[i].total>=max2)
		{
			max2=student[i].total;
			count2=i;
		}
	}
	number=student[1].num;
	sum=student[1].total;
	student[1].num=student[count2].num;
	student[1].total=student[count2].total;
	student[count2].num=number;
	student[count2].total=sum;
	number=0;
	sum=0;
	for(i=n-1; i>=2; i--)
	{
		if(student[i].total>=max3)
		{
			max3=student[i].total;
			count3=i;
		}
	}
	number=student[2].num;
	sum=student[2].total;
	student[2].num=student[count3].num;
	student[2].total=student[count3].total;
	student[count3].num=number;
	student[count3].total=sum;
	for(i=0; i<3; i++)
	{
		printf("%d %d\n", student[i].num, student[i].total);
	}
	return 0;
}