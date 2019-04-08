struct student
{
	char name[20];
	int ave;
	int cla;
	char leader;
	char west;
	int paper;
};
void main()
{
	struct student stu[200];
	int n,i,count[200],count2[200],k,j,temp,l,all,max;
	all=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		count[i]=0;
		scanf("%s %d %d %c %c %d",&stu[i].name,&stu[i].ave,&stu[i].cla,&stu[i].leader,&stu[i].west,&stu[i].paper);
		if(stu[i].ave>80&&stu[i].paper>=1)
			count[i]=count[i]+8000;
		if(stu[i].ave>85&&stu[i].cla>80)
			count[i]=count[i]+4000;
		if(stu[i].ave>90)
			count[i]=count[i]+2000;
		if(stu[i].ave>85&&stu[i].west=='Y')
			count[i]=count[i]+1000;
		if(stu[i].cla>80&&stu[i].leader=='Y')
			count[i]=count[i]+850;
		all=all+count[i];

	}
	for(k=0;k<n;k++)
		count2[k]=count[k];
	max=count[0];
	for(j=0;j<n;j++)
		if(count[j]>max)
			max=count[j];
		for(l=0;l<n;l++)
			if(count2[l]==max)
				break;
		printf("%s\n%d\n%d\n",stu[l].name,max,all);
}
