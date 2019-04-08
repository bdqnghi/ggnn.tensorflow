int main()
{
	struct stu
	{
		char name[20];
		int a;
		int b;
		char c;
		char d;
		int e;
		int sum;
	};
	struct stu s1,s2;
	int n,i,zong;
	scanf("%d\n",&n);
    scanf("%s %d %d %c %c %d",s1.name,&s1.a,&s1.b,&s1.c,&s1.d,&s1.e);
		s1.sum=0;
		if(s1.a>80&&s1.e>0)
			s1.sum+=8000;
		if(s1.a>85&&s1.b>80)
			s1.sum+=4000;
		if(s1.a>90)
			s1.sum+=2000;
		if(s1.a>85&&s1.d=='Y')
			s1.sum+=1000;
		if(s1.b>80&&s1.c=='Y')
			s1.sum+=850;
		zong=s1.sum;
	for(i=1;i<n;i++)
	{
		scanf("%s %d %d %c %c %d",s2.name,&s2.a,&s2.b,&s2.c,&s2.d,&s2.e);
		s2.sum=0;
		if(s2.a>80&&s2.e)
			s2.sum+=8000;
		if(s2.a>85&&s2.b>80)
			s2.sum+=4000;
		if(s2.a>90)
			s2.sum+=2000;
		if(s2.a>85&&s2.d=='Y')
			s2.sum+=1000;
		if(s2.b>80&&s2.c=='Y')
			s2.sum+=850;
		zong=zong+s2.sum;
		if(s2.sum>s1.sum)
		s1=s2;
	}
	printf("%s\n%d\n%d",s1.name,s1.sum,zong);
return 0;
}
