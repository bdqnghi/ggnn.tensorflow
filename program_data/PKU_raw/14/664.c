main()
{
	struct student{
		int id;
		float yuwen,shuxue,sum;
	}stu[100000],t;
	int n,i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	  {scanf("%d %f %f",&stu[i].id,&stu[i].yuwen,&stu[i].shuxue);
	   stu[i].sum=stu[i].yuwen+stu[i].shuxue;}
    for(i=0;i<3;i++)
      for(j=n-1;j>i;j--)
       	if(stu[j].sum>stu[j-1].sum)
       {
       	t=stu[j];
       	stu[j]=stu[j-1];
       	stu[j-1]=t;
       }
    for(i=0;i<3;i++)
     printf("%d %g\n",stu[i].id,stu[i].sum);
}