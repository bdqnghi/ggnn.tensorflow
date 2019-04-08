struct student
{
    char name[25];
    int qimo;
    int pingshi;
    char ganbu;
    char xibu;
    int lunwen;
    int money;
};
int jiangxuejin(struct student s);


int main(int argc, char* argv[])
{
	struct student a[101];
	int N,sum,max,MAX;
	scanf("%d",&N);
	for(int i=0;i<N;i++)
	{
		scanf("%s %d %d %c %c %d",a[i].name,&a[i].qimo,&a[i].pingshi,&a[i].ganbu,&a[i].xibu,&a[i].lunwen);
		a[i].money=jiangxuejin(a[i]);
	}
	sum=max=0;
	MAX=0;
	for(int j=0;j<N;j++)
	{
		if(a[j].money>max)
		{
			max=a[j].money;
			MAX=j;
		}
		sum+=a[j].money;
	}
	printf("%s\n",a[MAX].name);
	printf("%d\n",max);
	printf("%d\n",sum);
	return 0;
}

int jiangxuejin(struct student s)
{
	int sum=0;
	if((s.qimo>80)&&(s.lunwen>=1))
	{
		sum+=8000;
	}
	if((s.qimo>85)&&(s.pingshi>80))
	{
		sum+=4000;
	}
	if(s.qimo>90)
	{
		sum+=2000;
	}
	if((s.xibu=='Y')&&(s.qimo>85))
	{
		sum+=1000;
	}
	if((s.pingshi>80)&&(s.ganbu=='Y'))
	{
		sum+=850;
	}
	return sum;
}