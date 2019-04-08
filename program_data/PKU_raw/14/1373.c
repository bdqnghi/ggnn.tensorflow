void main()
{
	struct student
	{
	long int num;
	int score1;
	int score2;
	};
	struct student stu[100000];
	long int n;
	int i,j,k,m,a=0,b=0,c=0,A,B,C;
	A=B=C=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d %d %d",&stu[i].num,&stu[i].score1,&stu[i].score2);
		k=stu[i].score1+stu[i].score2;
		if(k>c)
		{
			c=k;
			C=stu[i].num;
		}
		if(c>b)
		{
			m=c;
			c=b;
			b=m;
			m=C;
			C=B;
			B=m;
		}
		if(b>a)
		{
			m=b;
			b=a;
			a=m;
			m=B;
			B=A;
			A=m;
		}
	}
	printf("%d %d\n%d %d\n%d %d",A,a,B,b,C,c);
}
