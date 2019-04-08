struct student
{
	char name[20];
	int qimo;
	int banji;
	char ganbu;
	char xibu;
	int paper;
}stu[100];

int main()
{    int f(struct student s);
	int n,i,a[100],max,count=0,m=0,k=0,sum=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%s%d%d %c %c%d",stu[i].name,&stu[i].qimo ,&stu[i].banji,&stu[i].ganbu,&stu[i].xibu,&stu[i].paper);
	for(i=0;i<n;i++)
		a[i]=f(stu[i]);
	for(i=0;i<n;i++)
  sum=sum+a[i];
	max=a[0];
	for(i=0;i<n;i++)
      if(a[i]>max)
	  {max=a[i];
	  m=i;}
	  for(i=0;i<n;i++)
		  if(a[i]==max)
		  count++;
		  if(count==1)
			  printf("%s\n%d\n%d",stu[m].name,max,sum);
     else for(i=0;i<n;i++)
		 if(a[i]==max)
		 {printf("%s\n%d\n%d",stu[i].name,max,sum);
		 break;}
		 return 0;

}
    int f(struct student s)
	{int sum=0;
	if(s.qimo>80&&s.paper>=1)
		sum=sum+8000;
	if(s.qimo>85&&s.banji>80)
		sum=sum+4000;
	if(s.qimo>90) 
		sum=sum+2000;
	if(s.qimo>85&&s.xibu=='Y')
		sum=sum+1000;
	if(s.banji>80&&s.ganbu=='Y')
		sum=sum+850;
	return sum;
	}