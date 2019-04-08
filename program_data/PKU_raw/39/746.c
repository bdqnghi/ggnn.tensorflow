void main()
{
	struct student
	{
		char name[20];
		int mark1;
		int mark2;
		char ganbu;
		char xibu;
		int lunwen;
		int total;
	}student[100],temp,Total;
	int n,i,j;
	scanf("%d",&n);
	Total.total=0;
	for(i=0;i<n;i++)
	{
		student[i].total=0;
		scanf("%s %d %d %c %c %d",student[i].name,&student[i].mark1,&student[i].mark2,&student[i].ganbu,&student[i].xibu,&student[i].lunwen);
		if(student[i].mark1>80&&student[i].lunwen>0)
			student[i].total+=8000;
		if(student[i].mark1>85&&student[i].mark2>80)
			student[i].total+=4000;
		if(student[i].mark1>90)
			student[i].total+=2000;
		if(student[i].mark1>85&&student[i].xibu=='Y')
			student[i].total+=1000;
		if(student[i].mark2>80&&student[i].ganbu=='Y')
			student[i].total+=850;
		Total.total+=student[i].total;
	}
	for(j=0;j<n-1;j++)
		for(i=0;i<n-1-j;i++)
		if(student[i].total>=student[i+1].total)
		{
			temp=student[i];
			student[i]=student[i+1];
			student[i+1]=temp;
		}
	
	printf("%s\n%d\n%d\n",student[n-1].name,student[n-1].total,Total.total);
}