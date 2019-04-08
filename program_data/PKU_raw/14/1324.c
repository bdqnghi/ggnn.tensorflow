
int main()
{
	struct student
	{
		int num, ch, ma, grade;
    }sum[100000], h, m, t;
	int i, n;
	scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		scanf("%d%d%d", &sum[i].num, &sum[i].ch, &sum[i].ma);
	    sum[i].grade=sum[i].ch+sum[i].ma;
	}
	h.grade=m.grade=t.grade=0;
	for(i=0;i<n;i++)
	{
		if(sum[i].grade>h.grade)
		{
			t=m;
			m=h;
			h=sum[i];
		}
		else if(sum[i].grade>m.grade)
		{
			t=m;
			m=sum[i];
		}
		else if(sum[i].grade>t.grade)
			t=sum[i];
	}
	printf("%d %d\n%d %d\n%d %d\n", h.num, h.grade, m.num, m.grade, t.num, t.grade);
	return 0;
}
