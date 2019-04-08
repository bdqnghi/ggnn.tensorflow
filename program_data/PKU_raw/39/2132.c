struct student
{char name[20];
 int final_score;
 int discussed_score;
 char leader;
 char west;
 int article;
};
void main()
{
	struct student stu[100];
	int i,n,m,t,p;
	int a[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%s%d%d %c %c%d",stu[i].name,&stu[i].final_score,&stu[i].discussed_score,&stu[i].leader,&stu[i].west,&stu[i].article);
	for(i=0,m=0;i<n;i++)
	{
		t=0;
		if(stu[i].final_score>80&&stu[i].article>=1) t=8000;
		if(stu[i].final_score>85&&stu[i].discussed_score>80) t=t+4000;
		if(stu[i].final_score>90) t=t+2000;
		if(stu[i].final_score>85&&stu[i].west=='Y') t=t+1000;
		if(stu[i].discussed_score>80&&stu[i].leader=='Y') t=t+850;
		a[i]=t;
		m=m+t;
	}
  t=a[0];
  p=0;
  for(i=0;i<n;i++)
  {
	  if(t<a[i]) 
	  {
		  t=a[i];
		  p=i;
	  }
  }
  printf("%s\n%d\n%d\n",stu[p].name,t,m);
}



   