struct student
	{char name[20];
	 int score1;
	 int score2;
	 char a;
	 char b;
	 int num;
	};
	struct student stu[100];
int main()
{
	int N,i,num;
	int a[100]={0};
	int sumall=0,summax=0;
	scanf("%d",&N);
	for(i=0;i<N;i++)
	scanf("%s%d%d %c %c %d",stu[i].name,&stu[i].score1,&stu[i].score2,&stu[i].a,&stu[i].b,&stu[i].num);
	

	for(i=0;i<N;i++)
	{if(stu[i].score1>80&&stu[i].num>=1)
			a[i]+=8000;
	if(stu[i].score1>85&&stu[i].score2>80)
		a[i]+=4000;
	if(stu[i].score1>90)
		a[i]+=2000;
	if(stu[i].score1>85&&stu[i].b=='Y')
		a[i]+=1000;
	if(stu[i].score2>80&&stu[i].a=='Y')
		a[i]+=850;
	if(summax<a[i])
		summax=a[i];
	sumall+=a[i];
	}
	for(i=0;i<N;i++)
	{if(a[i]==summax)
			{num=i;
	break;}
	}

	printf("%s\n%d\n%d\n",stu[num].name,a[num],sumall);
}