struct student
{
	char name[20];
	int s1,s2;
	char x,y;
	int l;
}stu[100];
int jiangjin(int i)
{
	int jiang=0;
	if(stu[i].s1>80&&stu[i].l>=1)
		jiang+=8000;
	if(stu[i].s1>85&&stu[i].s2>80)
		jiang+=4000;
	if(stu[i].s1>90)
		jiang+=2000;
	if(stu[i].s2>80&&stu[i].x=='Y')
		jiang+=850;
	if(stu[i].s1>85&&stu[i].y=='Y')
		jiang+=1000;
	return(jiang);
}
	
void main()
{
	int n,i,a[100],h,sum=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s %d %d %c %c %d",stu[i].name,&stu[i].s1,&stu[i].s2,&stu[i].x,&stu[i].y,&stu[i].l);
	a[i]=jiangjin(i);
	}
	h=0;
	for(i=0;i<n;i++)
	{
		sum+=a[i];
		if(a[i]>a[h]){
			h=i;}
	}
	printf("%s\n%d\n%d",stu[h].name,a[h],sum);
}