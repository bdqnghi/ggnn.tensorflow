struct Student{
	char name[20];
	int Academy;
	int Class;
	char Stujob;
	char west;
	int paper;
};
void main()
{
	int N,i,j,scolar[100][6],max;
	long int sum=0;
    struct Student stu[100];
	struct Student* p;
	scanf("%d",&N);
	for(i=0;i<N;i++)
		for(j=0;j<6;j++)
			scolar[i][j]=0;
	for(p=stu;p<stu+N;p++)
		scanf("%s %d %d %c %c %d",p->name,&p->Academy,&p->Class,&p->Stujob,&p->west,&p->paper);
    for(i=0;i<N;i++)
	{
		if(stu[i].Academy>80&&stu[i].paper>=1)
			scolar[i][0]=8000;
		if(stu[i].Academy>85&&stu[i].Class>80)
			scolar[i][1]=4000;
		if(stu[i].Academy>90)
			scolar[i][2]=2000;
		if(stu[i].Academy>85&&stu[i].west=='Y')
			scolar[i][3]=1000;
		if(stu[i].Class>80&&stu[i].Stujob=='Y')
			scolar[i][4]=850;
	}
	for(i=0;i<N;i++)
		for(j=4;j>=0;j--)
			scolar[i][5]=scolar[i][5]+scolar[i][j];
	max=scolar[0][5];j=0;
	for(i=0;i<N;i++)
		if(scolar[i][5]>max)
		{	max=scolar[i][5];j=i;}
    printf("%s\n%d\n",stu[j].name,scolar[j][5]);
	for(i=0;i<N;i++)
		sum=sum+scolar[i][5];
	printf("%ld",sum);
}