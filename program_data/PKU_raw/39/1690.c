void main()
{
    struct student
    {
    	char name[20];
    	int score1;
    	int score2;
    	char c1;
    	char c2;
    	int paper;
    	int bonus;
    };
    struct student stu[100];
    int n,i,sum,max;
    scanf("%d",&n);
    for(i=0;i<n;i++)
     	scanf("%s %d %d %c %c %d",stu[i].name,&stu[i].score1,
     	       &stu[i].score2,&stu[i].c1,&stu[i].c2,&stu[i].paper);
    for(i=0;i<n;i++)
    {
    	stu[i].bonus=0;
    	if(stu[i].score1>80&&stu[i].paper>=1) 
    	  stu[i].bonus+=8000;
    	if(stu[i].score1>85&&stu[i].score2>80)
    	  stu[i].bonus+=4000;
    	if(stu[i].score1>90) 
    	  stu[i].bonus+=2000;
    	if(stu[i].score1>85&&stu[i].c2=='Y')
    	  stu[i].bonus+=1000;
    	if(stu[i].score2>80&&stu[i].c1=='Y')
    	  stu[i].bonus+=850;
    }
    max=0;
    for(i=1;i<=n;i++)
     if(stu[i].bonus>stu[max].bonus) max=i;
    printf("%s\n",stu[max].name);
    printf("%d\n",stu[max].bonus);
    sum=0;
    for(i=0;i<n;i++)
     sum+=stu[i].bonus;
    printf("%d",sum);
}