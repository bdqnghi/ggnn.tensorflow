 struct student
{int id;
 int chinese;
 int maths;
 int total;
};
void main()
{ 
	int n,i;
    struct student s,s1,s2,s3;
	scanf("%d",&n);
	s2.total=s1.total=s3.total=-1;
	for(i=0;i<n;i++)
	{	scanf("%d %d %d",&s.id,&s.chinese,&s.maths);
		s.total=s.chinese+s.maths;
		if(s.total>s1.total)
		{	s3=s2;
		    s2=s1;
			s1=s;
		}
		else if(s.total>s2.total)
		{	s3=s2;
		    s2=s;
		}
		else if(s.total>s3.total)
			s3=s;
	}
	
	printf("%d %d\n",s1.id,s1.total);
	printf("%d %d\n",s2.id,s2.total);
	printf("%d %d\n",s3.id,s3.total);
	
}