struct stu
{char name[20];
 int score1;
 int score2;
 char leader;
 char west;
 int paper;
}stu[100];
void main()
{
	int n,i,a[100]={0},max=0,sum=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
   	 scanf("%s%d%d %c %c %d",&stu[i].name,&stu[i].score1,&stu[i].score2,&stu[i].leader,&stu[i].west,&stu[i].paper);
    for(i=0;i<n;i++)
    {
    	if(stu[i].score1>80&&stu[i].paper>0) a[i]+=8000;
    	if(stu[i].score1>85&&stu[i].score2>80)  a[i]+=4000;
    	if(stu[i].score1>90) a[i]+=2000;
    	if(stu[i].score1>85&&stu[i].west=='Y')  a[i]+=1000;
    	if(stu[i].score2>80&&stu[i].leader=='Y')  a[i]+=850;
    }
    for(i=0;i<n;i++)
    {
      max=(max>=a[i])?max:a[i];
      sum+=a[i];
    }
    for(i=0;i<n;i++)
    {
    	if(a[i]==max) 
		{printf("%s\n%d\n",stu[i].name,a[i]);
    	  break;}
    }
    printf("%d",sum);
}