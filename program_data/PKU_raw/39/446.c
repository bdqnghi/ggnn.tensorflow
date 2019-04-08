int main()
{
struct stu
{
	char name[20];
	int qimo;
	int banping;
	char gb[2];
	char xb[2];
	int lw;
	long int jxj;
}stu[100];

	int n,N,a=0,b=0,c=0,d=0,e=0,max,temp,totle=0;
	scanf("%d",&N);
	for(n=0;n<N;n++)
		scanf("%s%d%d%s%s%d",&stu[n].name,&stu[n].qimo,&stu[n].banping,&stu[n].gb,&stu[n].xb,&stu[n].lw);
	for(n=0;n<N;n++)
	{
		a=0;b=0;c=0;d=0;e=0;
		if((stu[n].qimo>80)&&(stu[n].lw>=1))a=8000;
		if((stu[n].qimo>85)&&(stu[n].banping>80))b=4000;
		if(stu[n].qimo>90)c=2000;
		if((stu[n].banping>80)&&(strcmp(stu[n].gb,"Y")==0))e=850;
		if((stu[n].qimo>85)&&(strcmp("Y",stu[n].xb)==0))d=1000;
		stu[n].jxj=a+b+c+d+e;
	}
		for(n=0;n<N;n++)
		{
			totle+=stu[n].jxj;
		}
		for(n=1;n<N;n++)
			if(stu[n].jxj>stu[0].jxj)
			{
				temp=stu[0].jxj;
				stu[0].jxj=stu[n].jxj;
				stu[n].jxj=temp;
				strcpy(stu[0].name,stu[n].name);
			}

	printf("%s\n%d\n%d\n",stu[0].name,stu[0].jxj,totle);
	return 0;
}
				
