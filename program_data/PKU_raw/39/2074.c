int main()
{
	struct stu
	{
		char name[21];
		int qm;
		int cm;
		char xs[21];
		char west[21];
		int paper;
		int sp;
	};
	struct stu a[101];
	int i,n;
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf("%s",&a[i].name);
		scanf("%d",&a[i].qm);
		scanf("%d",&a[i].cm);
		scanf("%s",&a[i].xs);
		scanf("%s",&a[i].west);
		scanf("%d",&a[i].paper);
		a[i].sp=0;
		if ((a[i].qm>80)&&(a[i].paper>0)) a[i].sp+=8000;
		if ((a[i].qm>85)&&(a[i].cm>80)) a[i].sp+=4000;
		if (a[i].qm>90) a[i].sp+=2000;
		if ((a[i].qm>85)&&(a[i].west[0]=='Y')) a[i].sp+=1000;
		if ((a[i].cm>80)&&(a[i].xs[0]=='Y')) a[i].sp+=850;
	}
	int max,total;
	max=0;
	total=0;
	for (i=0;i<n;i++)
	{
		if (a[i].sp>a[max].sp) max=i;
		total=total+a[i].sp;
	}
	printf("%s\n",a[max].name);
	printf("%d\n",a[max].sp);
	printf("%d\n",total);
	return 0;
}
