
	struct student
	{
		char name [20];
		int score1;
		int score2;
		char moni;
		char west;
		int comp;
	}stu[100];
void main()
{
	struct student *p;
	int n,sum=0,t,s=0,d,i;
	char nam[20];
	scanf("%d",&n);
	for (  p=stu;p<stu+ n;p++)
		scanf("%s %d %d %c %c %d", &p->name,&p->score1,&p->score2,&p->moni,&p->west,&p->comp);
	p=stu;
	for (p=stu;p<stu+n;p++)
	{
		t=0;
       if (p->score1>80&&p->comp>=1)
		   t=t+8000;
	   if (p->score1>85&&p->score2>80)
		   t=t+4000;
	   if (p->score1>90)
		   t=t+2000;
	   if (p->score1>85&&p->west=='Y')
		   t=t+1000;
	   if (p->score2>80&&p->moni=='Y')
		   t=t+850;
	   if (t>s)   
	   {
		   s=t;
		   d=strlen(p->name);
		   strcpy(nam,p->name);
		   for (i=d;i<20;i++)
			   nam[i]=0;
	   }
	   sum=sum+t;

	}
	puts(nam);
 
	printf("%d\n%d",s,sum); 

}