struct
{
	int tgra;
	char name[21];
	int cgra;
	char statue;
	char west;
	int paper;
}stu[100];

void main()
{
	int N,i,j,q,scholar[100]={0},temp,n=1,total=0;
	char media[21];
	char a;
	scanf("%d\n",&N);
	for(i=0;i<N;i++)
	{
		for(j=0;(a=getchar())!=' ';j++)
			stu[i].name[j]=a;
		stu[i].name[j]='\0';
		scanf("%d %d %c %c %d",&stu[i].tgra,&stu[i].cgra,&stu[i].statue,&stu[i].west,&stu[i].paper);
	}
	for(i=0;i<N;i++)
	{
		if((stu[i].tgra>80) && (stu[i].paper>=1))
			scholar[i]=scholar[i]+8000;
		if((stu[i].tgra>85) && (stu[i].cgra>80))
			scholar[i]=scholar[i]+4000;
		if(stu[i].tgra>90)
			scholar[i]=scholar[i]+2000;
		if(stu[i].tgra>85 && stu[i].west=='Y')
			scholar[i]=scholar[i]+1000;
		if(stu[i].cgra>80 && stu[i].statue=='Y')
			scholar[i]=scholar[i]+850;
	}
	q=0;
	for(j=1;j<N;j++)
	{
		if(scholar[q]<scholar[j])
		{
				q=j;
		}
	}
    //puts(stu[0].name);
	for(i=0;i<strlen(stu[q].name);i++)
	{
		if (stu[q].name[i]!=10)
			printf("%c",stu[q].name[i]);
	}
	printf("\n%d\n",scholar[q]);
	for(i=0;i<N;i++)
		total=total+scholar[i];
	printf("%d\n",total);
}


