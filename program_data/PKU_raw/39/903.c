struct stu
{
	char name[25];
	int sco;
	int scob;
	int gb;
	int xb;
	int lw;
	int mon;
};
int main()
{
	int n;
	int i;
	int max=0;
	int zh;
	long int all=0;
	char du1,du2;
	scanf("%d",&n);
	struct stu a[100];
	for(i=0;i<n;i++)
	{
		scanf("%s %d %d %c %c %d",a[i].name,&a[i].sco,&a[i].scob,&du1,&du2,&a[i].lw);
		if(du1=='Y')
			a[i].gb=1;
		else
			a[i].gb=0;
		if(du2=='Y')
			a[i].xb=1;
		else
			a[i].xb=0;
		a[i].mon=0;
	}
	for(i=0;i<n;i++)
	{
		if(a[i].sco>80&&a[i].lw>=1)
			a[i].mon+=8000;
		if(a[i].sco>85&&a[i].scob>80)
			a[i].mon+=4000;
		if(a[i].sco>90)
			a[i].mon+=2000;
		if(a[i].sco>85&&a[i].xb==1)
			a[i].mon+=1000;
		if(a[i].scob>80&&a[i].gb==1)
			a[i].mon+=850;
		if(a[i].mon>max)
		{
			max=a[i].mon;
			zh=i;
		}
		all+=a[i].mon;
	}
	printf("%s\n%d\n%lu",a[zh].name,a[zh].mon,all);
}