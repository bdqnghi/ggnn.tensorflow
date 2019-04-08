struct Student
{
	int id;
	int c;
	int m;
	int sum;
};
void main()
{
	struct Student temp,s1,s2,s3;	
	int i,n;
	s1.sum=s2.sum=s3.sum=-1;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d%d%d",&temp.id,&temp.c,&temp.m);
		temp.sum=temp.c+temp.m;
		if(temp.sum>s1.sum)
		{
			s3=s2;
			s2=s1;
			s1=temp;
		}
		else if (temp.sum>s2.sum)
		{
			s3=s2;
			s2=temp;
		}
		else if(temp.sum>s3.sum)
		{
			s3=temp;
		}
	}
	printf("%d %d\n%d %d\n%d %d\n",s1.id,s1.sum,s2.id,s2.sum,s3.id,s3.sum);
}
	
