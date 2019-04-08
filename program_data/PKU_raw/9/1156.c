int main()
{
	int n,m=0;
	scanf("%d\n",&n);
	struct p{
		char num[10000];
		int age;
	}p[100];
	struct p1{
		char num1[10000];
		int age1;
	}p1[100];
	int i,j;
	for(i=0;i<n;i++)
	{
		scanf("%s%d\n",p[i].num,&p[i].age);
		if(p[i].age>=60)
		{
			strcpy(p1[m].num1,p[i].num);
            p1[m].age1=p[i].age;
			m=m+1;
		}
	}
	int e;
	char w[10000];
	for(i=1;i<m;i++)
	{
		for(j=0;j<m-i;j++)
		{
			if(p1[j].age1<p1[j+1].age1)
			{
				strcpy(w,p1[j+1].num1);
				strcpy(p1[j+1].num1,p1[j].num1);
				strcpy(p1[j].num1,w);
				e=p1[j+1].age1;
				p1[j+1].age1=p1[j].age1;
				p1[j].age1=e;
				
			}
		}
	}
	for(i=0;i<m;i++)
	{
		printf("%s\n",p1[i].num1);
	}
	for(i=0;i<n;i++)
	{
		if(p[i].age<60)
		{
			printf("%s\n",p[i].num);
		}
	}
	return 0;
}
			


