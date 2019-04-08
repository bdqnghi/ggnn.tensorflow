struct student
{
	char name[30];
	int sco;
	int pin;
	char gan;
	char xi;
	int lun;
};
struct student stu[100];
void main()
{
	int i,j,k,m,n,a[100],sum=0,t,add=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%s %d %d %c %c %d",stu[i].name,&stu[i].sco,&stu[i].pin,&stu[i].gan,&stu[i].xi,&stu[i].lun);
		a[i]=0;
	}
	for(i=1;i<=n;i++)
	{
		if(stu[i].sco>80&&stu[i].lun>=1)
			a[i]=a[i]+8000;
		if(stu[i].sco>85&&stu[i].pin>80)
			a[i]=a[i]+4000;
		if(stu[i].sco>90)
			a[i]=a[i]+2000;
		if(stu[i].sco>85&&stu[i].xi=='Y')
			a[i]=a[i]+1000;
		if(stu[i].pin>80&&stu[i].gan=='Y')
			a[i]=a[i]+850;
	}
	for(i=1;i<=n;i++)
	{
		if(sum<a[i])
			sum=a[i];
	}
	for(i=1;i<=n;i++)
	{
		if(a[i]==sum)
		{
			t=i;break;
		}
			
	}
	for(i=1;i<=n;i++)
	{add=add+a[i];}

	printf("%s\n%d\n%d",stu[t].name,sum,add);
	
}