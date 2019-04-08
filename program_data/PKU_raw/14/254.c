struct Student
{int num;
 int yuwen;
 int shuxue;
};
void fun(int*a,int*b);
int main()
{
	int n,i,j;
	int sum[100000];
	scanf ("%d",&n);
	struct Student stu[100000];
	for (i=0;i<n;i++)
	{
		scanf ("%d%d%d",&stu[i].num,&stu[i].yuwen,&stu[i].shuxue);
		sum[i]=stu[i].yuwen+stu[i].shuxue;
	}
	for(i=0;i<3;i++)
	{
		for(j=n-1;j>i;j--)
		{
			if(sum[j]>sum[j-1])
			{
				fun(&sum[j],&sum[j-1]);
				fun(&stu[j-1].num,&stu[j].num);
					fun(&stu[j-1].yuwen,&stu[j].yuwen);
					fun(&stu[j-1].shuxue,&stu[j].shuxue);
			}
		}
	}
	for (i=0;i<3;i++)
		printf ("%d %d\n",stu[i].num,sum[i]);
	return 0;
}
void fun(int*a,int*b)
{
	int k;
	k=*a;
	*a=*b;
	*b=k;
}