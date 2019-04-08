void main()
{
	struct stu
	{
		char name[21];
	    int qimo;
	    int banji;
	    char ganbu;
	    char xibu;
	    int lunwen;
		int zongjiangjin;
	}stu[100];
	struct stu temp;
	int n,i,j;
	int sum;
	int total=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s %d %d %c %c %d",stu[i].name,&stu[i].qimo,&stu[i].banji,&stu[i].ganbu,&stu[i].xibu,&stu[i].lunwen);
		sum=0;
		if(stu[i].qimo>80&&stu[i].lunwen>=1)
			sum=sum+8000;
		if(stu[i].qimo>85&&stu[i].banji>80)
			sum=sum+4000;
		if(stu[i].qimo>90)
			sum=sum+2000;
		if(stu[i].qimo>85&&stu[i].xibu=='Y')
			sum=sum+1000;
		if(stu[i].banji>80&&stu[i].ganbu=='Y')
			sum=sum+850;
		stu[i].zongjiangjin=sum;
		total=total+sum;
	}
	for(j=1;j<n;j++)
		for(i=0;i<n-j;i++)
			if(stu[i].zongjiangjin<stu[i+1].zongjiangjin)
			{
				temp=stu[i];
				stu[i]=stu[i+1];
				stu[i+1]=temp;
			}
	printf("%s\n",stu[0].name);
	printf("%d\n",stu[0].zongjiangjin);
	printf("%d\n",total);
}