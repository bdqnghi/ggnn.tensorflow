struct student 
{
	char name[100];
	int n1;
	int n2;
	char a;
	char b;
	int n3;
};
void main()
{
	int N,i,j,s[101][6],max,k=0;
	long int sum=0;
	scanf("%d\n",&N);
	struct student stu[101];
	struct student *p;
	for(p=stu;p<stu+N;p++)
	{scanf("%s %d %d %c %c %d",p->name,&p->n1,&p->n2,&p->a,&p->b,&p->n3);}
	for(i=0;i<N;i++)
		for(j=0;j<6;j++)
		{s[i][j]=0;}
    for(i=0;i<N;i++)
	{
		if(stu[i].n1>80&&stu[i].n3>=1)
			s[i][0]=8000;
		if(stu[i].n1>85&&stu[i].n2>80)
			s[i][1]=4000;
		if(stu[i].n1>90)
			s[i][2]=2000;
		if(stu[i].n1>85&&stu[i].b=='Y')
			s[i][3]=1000;
		if(stu[i].n2>80&&stu[i].a=='Y')
			s[i][4]=850;
	}
	for(i=0;i<N;i++)
		for(j=4;j>=0;j--)
		{s[i][5]=s[i][5]+s[i][j];}
	max=s[0][5];
	for(i=0;i<N;i++)
		if(s[i][5]>max)
		{max=s[i][5];k=i;}
    printf("%s\n%d\n",stu[k].name,s[k][5]);
	for(i=0;i<N;i++)
		sum=sum+s[i][5];
	printf("%ld\n",sum);
}
