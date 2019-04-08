struct student
{
	char name[20];
	int ave;
	int cla;
	char mon;
	char pro;
	int essay;
	int scholar;
};
struct student st[100];
struct student temp;
int main()
{
	int i,N,j,sum=0;
	scanf("%d",&N);
	for(i=0;i<N;i++)
	{
		scanf("%s %d %d %c %c %d",st[i].name,&st[i].ave,&st[i].cla,&st[i].mon,&st[i].pro,&st[i].essay);
		st[i].scholar=0;
		if(st[i].ave>80&&st[i].essay!=0)
			st[i].scholar=st[i].scholar+8000;
		if(st[i].ave>85&&st[i].cla>80)
			st[i].scholar=st[i].scholar+4000;
		if(st[i].ave>90)
			st[i].scholar=st[i].scholar+2000;
		if(st[i].ave>85&&st[i].pro=='Y')
			st[i].scholar=st[i].scholar+1000;
		if(st[i].cla>80&&st[i].mon=='Y')
			st[i].scholar=st[i].scholar+850;
		sum=sum+st[i].scholar;
	}
	for(j=0;j<N-1;j++)
	{
		if(st[j].scholar>=st[j+1].scholar)
		{
			temp=st[j];st[j]=st[j+1];st[j+1]=temp;
		}
	}
	printf("%s\n%d\n%d\n",st[N-1].name,st[N-1].scholar,sum);
}