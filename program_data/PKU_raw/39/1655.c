struct student
{
	char num[100];
	int sco;
	int pin;
	char gan;
	char xi;
	int pap;
};

void main()
{
	int i,j,k,m,n,a[100],sum=0;
	struct student stu[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		a[i]=0;
		scanf("%s %d %d %c %c %d",stu[i].num,&stu[i].sco,&stu[i].pin,&stu[i].gan,&stu[i].xi,&stu[i].pap);
	}
	for(i=0;i<n;i++)
	{
		if(stu[i].sco>80&&stu[i].pap>=1)
			a[i]+=8000;
		if(stu[i].sco>85&&stu[i].pin>80)
			a[i]+=4000;
		if(stu[i].sco>90)
			a[i]+=2000;
		if(stu[i].sco>85&&stu[i].xi=='Y')
			a[i]+=1000;
		if(stu[i].pin>80&&stu[i].gan=='Y')
			a[i]+=850;
	}
	k=0;
	for(i=0;i<n;i++)
	{
		if(a[i]>k)
			k=a[i];
	}
	for(i=0;i<n;i++)
		if(a[i]==k)
			break;
		printf("%s\n%d",stu[i].num,a[i]);
	for(i=0;i<n;i++)
		sum=sum+a[i];
	printf("\n%d",sum);

	
	
}