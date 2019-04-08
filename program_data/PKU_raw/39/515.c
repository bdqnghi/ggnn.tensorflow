struct student{
	char name[20];
	int t1;
	int t2;
	char gan;
	char west;
	int wen;
	int sum;
};

void main()
{
     int n,i,j,whole=0;
	 struct student stu[100];
	 struct student temp;
	 scanf("%d",&n);
	 for(i=0;i<n;i++)
	 {
		 scanf("%s%d%d %c %c %d",stu[i].name,&stu[i].t1,&stu[i].t2,&stu[i].gan,&stu[i].west,&stu[i].wen);
		 stu[i].sum=0;
         if(stu[i].t1>80&&stu[i].wen>=1)
			 stu[i].sum=stu[i].sum+8000;
		 if(stu[i].t1>85&&stu[i].t2>80)
			 stu[i].sum=stu[i].sum+4000;
		 if(stu[i].t1>90)
			 stu[i].sum=stu[i].sum+2000;
		 if(stu[i].t1>85&&stu[i].west=='Y')
			 stu[i].sum=stu[i].sum+1000;
		 if(stu[i].t2>80&&stu[i].gan=='Y')
			 stu[i].sum=stu[i].sum+850;
	 }
	 for(j=1;j<n;j++)
          for(i=0;i<n-j;i++)
		{
		if(stu[i].sum<stu[i+1].sum)
		{
			temp=stu[i];
			stu[i]=stu[i+1];
			stu[i+1]=temp;

		}
		}
	 for(i=0;i<n;i++)
		 whole=whole+stu[i].sum;
     printf("%s\n%d\n%d",stu[0].name,stu[0].sum,whole);
}    