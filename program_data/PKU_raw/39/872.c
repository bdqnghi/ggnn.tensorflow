
struct student
{
	char name[20];
	int a;
	int b;
	char cla;
	char west;
	int paper;
	int total;
}s[100];
int main()
{
	int n,i,sum=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",s[i].name);
		scanf("%d%d %c %c%d",&s[i].a,&s[i].b,&s[i].cla,&s[i].west,&s[i].paper);
		s[i].total=0;
		if(s[i].a>80&&s[i].paper>=1)
			s[i].total+=8000;
		if(s[i].a>85&&s[i].b>80)
			s[i].total+=4000;
		if(s[i].a>90)
			s[i].total+=2000;
		if(s[i].a>85&&s[i].west=='Y')
			s[i].total+=1000;
		if(s[i].b>80&&s[i].cla=='Y')
			s[i].total+=850;
		sum+=s[i].total;
	}
	for(i=1;i<n;i++)
	{
		if(s[i].total>s[0].total)
			s[0]=s[i];
	}
	printf("%s\n",s[0].name);
	printf("%d\n",s[0].total);
	printf("%d",sum);
	
	return 0;
}


