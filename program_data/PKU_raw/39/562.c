struct stu
{
	char nam[40];
	int qi;
	int pi;
	char gan;
	char xi;
	int lun;
	int ji;
}stu[102];
void main()
{
	int total=0;
	int i,n,k=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s %d %d %c %c %d",stu[i].nam,&stu[i].qi,&stu[i].pi,&stu[i].gan,&stu[i].xi,&stu[i].lun);
	}
	for(i=0;i<n;i++)
	{
		stu[i].ji=0;
		if(stu[i].qi>80&&stu[i].lun>0)
            stu[i].ji+=8000;
		if(stu[i].qi>85&&stu[i].pi>80)
			stu[i].ji+=4000;
		if(stu[i].qi>90)
			stu[i].ji+=2000;
		if(stu[i].qi>85&&stu[i].xi=='Y')
			stu[i].ji+=1000;
		if(stu[i].pi>80&&stu[i].gan=='Y')
			stu[i].ji+=850;
	}
	for(i=0;i<n;i++)
	{
		total+=stu[i].ji;
	}
	for(i=1;i<n;i++)
	{
		if(stu[i].ji>stu[k].ji)
			stu[k]=stu[i];
	}
	printf("%s\n",stu[k].nam);
	printf("%d\n",stu[k].ji);
	printf("%d\n",total);
}




