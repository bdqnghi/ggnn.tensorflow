int main()
{
	struct std{
		char name[20];
		int qm,bp,lw,jj;
		char gb,xb;
	}stu[200];
	int n,i,s=0,max;
	char mn[20];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		stu[i].jj=0;
		scanf("%s %d %d %c %c %d",stu[i].name,&stu[i].qm,&stu[i].bp,&stu[i].gb,&stu[i].xb,&stu[i].lw);
		if(stu[i].qm>80&&stu[i].lw>0){stu[i].jj+=8000;}
		if(stu[i].qm>85&&stu[i].bp>80){stu[i].jj+=4000;}
		if(stu[i].qm>90){stu[i].jj+=2000;}
		if(stu[i].qm>85&&stu[i].xb=='Y'){stu[i].jj+=1000;}
		if(stu[i].bp>80&&stu[i].gb=='Y'){stu[i].jj+=850;}
		s=s+stu[i].jj;
	}
	max=stu[0].jj;
	strcpy(mn,stu[0].name);
	for(i=0;i<n;i++)
	{
		if(max<stu[i].jj)
		{
			max=stu[i].jj;
			strcpy(mn,stu[i].name);
		}
	}
	printf("%s\n%d\n%d",mn,max,s);
	return 0;
}