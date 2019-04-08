
int main()
{
	int n;
	scanf("%d",&n);
	struct student
	{
		char name[20];
		int scores1,scores2,paper;
		char a,b;
	}s[100];
    int p[100];
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%s %d %d %c %c %d",&s[i].name,&s[i].scores1,&s[i].scores2,&s[i].a,&s[i].b,&s[i].paper);
	}
	int sum;
	for(i=0;i<n;i++)
	{
		sum=0;
		if(s[i].scores1>80&&s[i].paper>=1)
		{
			sum+=8000;
		}
		if(s[i].scores1>85&&s[i].scores2>80)
		{
			sum+=4000;
		}
		if(s[i].scores1>90)
		{
			sum+=2000;
		}
		if(s[i].scores1>85&&s[i].b=='Y')
		{
			sum+=1000;
		}
		if(s[i].scores2>80&&s[i].a=='Y')
		{
			sum+=850;
		}
		
		p[i]=sum;
	}
	int max=0,c=0;
	for(i=0;i<n;i++)
	{
		if(p[i]>=max)
		{
			max=p[i];
		}
		c+=p[i];
	}
	for(i=0;i<n;i++)
	{
		if(p[i]==max)
		{
			printf("%s\n%d\n%d\n",s[i].name,p[i],c);
			break;
		}
	}
	return 0;
}


