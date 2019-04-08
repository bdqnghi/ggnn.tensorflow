
struct stus
{
    char name[25];
	int qimo;
	int banji;
	char ganbu;
    char xibu;
	int lunwen;
	int p;
};

void main()
{
	int m,n,i,j,k,s=0;
	char c[25]={0};
	struct stus stu[101]={0};
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s %d %d %c %c %d",stu[i].name,&stu[i].qimo,&stu[i].banji,&stu[i].ganbu,&stu[i].xibu,&stu[i].lunwen);
        if(stu[i].qimo>80&&stu[i].lunwen>=1)
			stu[i].p+=8000;
		if(stu[i].qimo>85&&stu[i].banji>80)
			stu[i].p+=4000;
		if(stu[i].qimo>90)
			stu[i].p+=2000;
		if(stu[i].xibu=='Y'&&stu[i].qimo>85)
			stu[i].p+=1000;
		if(stu[i].banji>80&&stu[i].ganbu=='Y')
			stu[i].p+=850;
        s+=stu[i].p;
	}
	m=stu[0].p;
	strcpy(c,stu[0].name);
    for(i=1;i<n;i++)
		if(stu[i].p>m)
		{
            strcpy(c,stu[i].name);
            m=stu[i].p;
		}
	printf("%s\n",c);
	printf("%d\n%d",m,s);
}