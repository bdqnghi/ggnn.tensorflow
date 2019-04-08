
void main()
{
	typedef struct stu
	{
		char name[22];
		int qm;
		int bj;
		char gb;
		char xb;
		int lw;
		int jxj;
	}stu;
	stu s[100];
	int i,n,max,total;
	memset(s,0,sizeof(s));
	max = 0; total = 0;
	scanf("%d",&n);
	for (i = 0;i < n;i++)
	{
		scanf("%s %d %d %c %c %d",(s+i)->name,&(s+i)->qm,&(s+i)->bj,&(s+i)->gb,&(s+i)->xb,&(s+i)->lw);
		if ((s+i)->qm > 80 && (s+i)->lw) (s+i)->jxj += 8000;
		if ((s+i)->qm > 85 && (s+i)->bj > 80) (s+i)->jxj += 4000;
		if ((s+i)->qm > 90) (s+i)->jxj += 2000;
		if ((s+i)->qm > 85 && (s+i)->xb == 'Y') (s+i)->jxj += 1000;
		if ((s+i)->bj > 80 && (s+i)->gb == 'Y') (s+i)->jxj += 850;
	}
	for (i = 0;i < n;i++)
	{
		if (max < (s+i)->jxj) max = (s+i)->jxj;
		total += (s+i)->jxj;
	}
	for (i = 0;i < n;i++)
		if (max == (s+i)->jxj)
		{
			printf("%s\n",(s+i)->name);
			break;
		}
	printf("%d\n%d\n",max,total);
}
