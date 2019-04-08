
struct fuckme
{
	char name[20];
	int final;
	int judge;
	char leader;
	char west;
	int paper;
}student[101];

int main()
{
	int max(int total[101], int n);
	int n,k,N=0;
	int i;
	int yuanshi[101]={0},wusi[101]={0},youxiu[101]={0},
		xibu[101]={0},gongxian[101]={0},total[101];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s %d %d %c %c %d",student[i].name,&student[i].final,
			&student[i].judge,&student[i].leader,&student[i].west,
			&student[i].paper);
		if(student[i].final>80&&student[i].paper>0)
			yuanshi[i]=8000;
		if(student[i].final>85&&student[i].judge>80)
			wusi[i]=4000;
		if(student[i].final>90)
			youxiu[i]=2000;
		if(student[i].final>85&& student[i].west=='Y')
			xibu[i]=1000;
		if(student[i].judge>80&& student[i].leader=='Y')
			gongxian[i]=850;
		total[i]=yuanshi[i]+wusi[i]+youxiu[i]+xibu[i]+gongxian[i];
		N+=total[i];
	}
	k=max(total,n);
	printf("%s\n%d\n%d\n",student[k].name,total[k],N);
	return 0;
}

int max(int total[101], int n)
{
	int a=0,j=0,k=0;
	for(j=0;j<n;j++)
	{
		if(total[j]>a)
		{
			a=total[j];
			k = j;
		}
	}
	return k;
}
