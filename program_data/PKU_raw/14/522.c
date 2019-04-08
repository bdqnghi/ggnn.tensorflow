void main()
{
	struct student
	{
		int ID;
	    int mark1;
		int mark2;
		int total;
	}student[100000],temp;
	int n,k,m;
	scanf("%d",&n);
	for(k=0;k<n;k++)
	{
		scanf("%d%d%d",&student[k].ID,&student[k].mark1,&student[k].mark2);
		student[k].total=student[k].mark1+student[k].mark2;
	}
	for(m=0;m<3;m++)
	{
	for(k=n-1;k>=m;k--)
	{
		if(student[k].total>student[k-1].total)
		{
			temp=student[k-1];
			student[k-1]=student[k];
			student[k]=temp;
		}
	}
	}
	printf("%d %d\n%d %d\n%d %d\n",student[0].ID,student[0].total,student[1].ID,student[1].total,student[2].ID,student[2].total);
}