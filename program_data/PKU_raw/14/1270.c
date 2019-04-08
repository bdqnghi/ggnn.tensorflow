struct Student
{
	long Id;
	int yuwen;
	int shuxue;
};

int main()
{
	int i,j; 
	long n;
	struct Student student[NUM];
	struct Student temp;
	scanf("%ld\n",&n);
	for(i=0;i<n;i++)
		scanf("%ld%d%d",&student[i].Id,&student[i].yuwen,&student[i].shuxue);
	for(i=0;i<3;i++)
	{
		for(j=0;j<(3-i-1);j++)
		{
			if((student[j+1].yuwen+student[j+1].shuxue)>(student[j].yuwen+student[j].shuxue))
			{
				temp=student[j+1];
				student[j+1]=student[j];
				student[j]=temp;
			}
		}
	}
	for(i=3;i<n;i++)
	{
        if((student[i].yuwen+student[i].shuxue)>(student[2].yuwen+student[2].shuxue))
			{
				student[2]=student[i];	
			}
		if((student[i].yuwen+student[i].shuxue)>(student[1].yuwen+student[1].shuxue))
			{
				temp=student[1];
				student[1]=student[i];
				student[2]=temp;
			}
		if((student[i].yuwen+student[i].shuxue)>(student[0].yuwen+student[0].shuxue))
			{
				temp=student[0];
				student[0]=student[i];
				student[1]=temp;
			}
	}
	for(i=0;i<3;i++)
	{
		printf("%ld %d\n",student[i].Id,(student[i].shuxue+student[i].yuwen));
	}
	return 0;
}

