struct student
{
	char name[20];
	int gradeA;
	int gradeB;
	char a;
	char b;
	int num;
	int n;//??
	int np;//??
}
stu[100];
void main()
{
	int m,k,i,max;
	int total=0;
	scanf("%d\n",&m);
	for(i=0;i<m;i++)
	{
		scanf("%s %d %d %c %c %d",stu[i].name,&stu[i].gradeA,&stu[i].gradeB,&stu[i].a,&stu[i].b,&stu[i].num);
		stu[i].n=0;
		stu[i].np=0;
	}
	for(i=0;i<m;i++)
	{
		if(stu[i].gradeA>80&&stu[i].num>=1)
		{
			total=total+8000;
			stu[i].n++;
			stu[i].np=stu[i].np+8000;
		}
		if(stu[i].gradeA>85&&stu[i].gradeB>80)
		{
			total=total+4000;
			stu[i].n++;
			stu[i].np=stu[i].np+4000;
		}
		if(stu[i].gradeA>90)
		{
			total=total+2000;
            stu[i].n++;
			stu[i].np=stu[i].np+2000;
		}
		if(stu[i].gradeA>85&&stu[i].b=='Y')
		{
			total=total+1000;
            stu[i].n++;
			stu[i].np=stu[i].np+1000;
		}
		if(stu[i].gradeB>80&&stu[i].a=='Y')
		{
			total=total+850;
            stu[i].n++;
			stu[i].np=stu[i].np+850;
		}
	}
	for(i=0,max=0;i<m;i++)
		if(stu[i].np>max)
		{
			max=stu[i].np;
		}
	for(i=0;i<m;i++)
	{
		if(stu[i].np==max)
		{
			k=i;
		    break;
		}
	}
	printf("%s\n%d\n%d\n",stu[k].name,stu[k].np,total);
}