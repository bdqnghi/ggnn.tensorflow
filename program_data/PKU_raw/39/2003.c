int main()
{
	struct student
	{
		char name[20];
			int qm;
			int py;
			char gb[2];
			char xb[2];
			int lw;
			int jxj;
	}student[2]={{'\0',0,0,'\0','\0',0,0},{'\0',0,0,'\0','\0',0,0}};
	struct student temp={'\0',0,0,'\0','\0',0,0};
	int i,n,sum;
	scanf("%d",&n);
	sum=0;
		for(i=0;i<n;i++)
		{
			scanf("%s%d%d%s%s%d",student[1].name,&student[1].qm,&student[1].py,student[1].gb,student[1].xb,&student[1].lw);
			if(student[1].py>80&&strcmp(student[1].gb,"Y")==0)
			{
				student[1].jxj=student[1].jxj+850;
			}
			if(student[1].qm>80&&student[1].lw>=1)
			{
				student[1].jxj=student[1].jxj+8000;
			}
			if(student[1].qm>85&&student[1].py>80)
			{
				student[1].jxj=student[1].jxj+4000;
			}
			if(student[1].qm>90)
			{
				student[1].jxj=student[1].jxj+2000;
			}
			if(student[1].qm>85&&strcmp(student[1].xb,"Y")==0)
			{
				student[1].jxj=student[1].jxj+1000;
			}
			sum=sum+student[1].jxj;

			if(student[1].jxj>student[0].jxj)
			{
				temp=student[1];
				student[1]=student[0];
				student[0]=temp;
			}

			student[1].jxj=0;
		}
		printf("%s\n%d\n%d\n",student[0].name,student[0].jxj,sum);
}


