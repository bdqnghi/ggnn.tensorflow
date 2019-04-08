 struct stu
 {
	 int num;
	 int m;
	 int c;
	 int sum;
 };



int main()
{
	long int n;
	int a=0,b=0,c=0,x=0,y=0,z=0;
	struct stu student[65535];
	scanf("%d",&n);
	for (int i=0;i<n;i++)
	{
		scanf("%d %d %d",&student[i].num,&student[i].c,&student[i].m);
		student[i].sum=student[i].m+student[i].c;
	}
	for (int i=0;i<n;i++)
	{
		if(student[i].sum>a)
		{
			c=b;
			z=y;
			b=a;
			y=x;
			a=student[i].sum;
			x=student[i].num;
			continue;
		}
		if(student[i].sum>b)
		{
			c=b;
			z=y;
			b=student[i].sum;
			y=student[i].num;
			continue;
		}
		if (student[i].sum>c)
		{
			c=student[i].sum;
			z=student[i].num;
		}
	}
	printf("%d %d\n%d %d\n%d %d\n",x,a,y,b,z,c);
getchar();
getchar();
return 0;
}