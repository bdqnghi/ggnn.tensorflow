
struct student
{
	int num;
	char name[20];
	int qimo;
	int pingyi;
	char ganbu;
	char west;
	int paper;
};
struct jiangxuejin
{
	int num;
	int total;
};

int main()
{
	int n,i,all=0;
	struct student list[100],most;
	struct jiangxuejin everyone[100],check;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		list[i].num=i;
		scanf("%s %d %d %c %c %d",list[i].name,&list[i].qimo,&list[i].pingyi,&list[i].ganbu,&list[i].west,&list[i].paper);
	}

	for(i=0;i<n;i++)
	{
		everyone[i].num=i;
		everyone[i].total=0;
		if(list[i].qimo>80&&list[i].paper>=1){
			everyone[i].total+=8000;
		}
		if(list[i].qimo>85&&list[i].pingyi>80){
			everyone[i].total+=4000;
		}
		if(list[i].qimo>90){
			everyone[i].total+=2000;
		}
		if(list[i].qimo>85&&list[i].west=='Y'){
			everyone[i].total+=1000;
		}
		if(list[i].pingyi>80&&list[i].ganbu=='Y'){
			everyone[i].total+=850;
		}
	}

	most=list[0];
	check=everyone[0];

	for(i=1;i<n;i++)
	{
		if(everyone[i].total>check.total){
			most=list[i];
			check=everyone[i];
		}
	}

	for(i=0;i<n;i++)
	{
		all+=everyone[i].total;
	}

	printf("%s\n%d\n%d",most.name,check.total,all);
	return 0;
}
		





	
