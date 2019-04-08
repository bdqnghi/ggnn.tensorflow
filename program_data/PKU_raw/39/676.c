struct Student
{char name[20];
 int a;
 int b;
 char c;
 char d;
 int e;
 int f;
};
int main()
{
	int n,i,k,m,t;
	scanf ("%d",&n);
	struct Student stu[200];
	for (i=0;i<n;i++)
	{
		scanf ("%s %d %d %c %c %d",stu[i].name,&stu[i].a,&stu[i].b,&stu[i].c,&stu[i].d,&stu[i].e);
	    stu[i].f=0;
	}
	for (i=0,m=0;i<n;i++)
	{
		if (stu[i].a>80&&stu[i].e>0)
			stu[i].f=stu[i].f+8000;
		if (stu[i].a>85&&stu[i].b>80)
			stu[i].f=stu[i].f+4000;
		if (stu[i].a>90)
			stu[i].f=stu[i].f+2000;
		if (stu[i].a>85&&stu[i].d=='Y')
			stu[i].f=stu[i].f+1000;
		if (stu[i].b>80&&stu[i].c=='Y')
			stu[i].f=stu[i].f+850;
		if (stu[i].f>m)
		{
			m=stu[i].f;
		    t=i;
		}
	}
	for (i=0,k=0;i<n;i++)
		k=k+stu[i].f;
	printf ("%s\n%d\n%d\n",stu[t].name,m,k);
	return 0;
}
