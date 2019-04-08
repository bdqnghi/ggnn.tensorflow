main()
{struct student
	{char name[20];
	int average;
	int classeva;
	char leader;
	char western;
	int paper;
	};
 int n,i;
 scanf("%d",&n);
 struct student stu[100];
 for(i=0;i<n;i++)
	 scanf("%s%d%d %c %c%d",stu[i].name,&stu[i].average,&stu[i].classeva,
	       &stu[i].leader,&stu[i].western,&stu[i].paper);
 int sum[100],max=0;
 long total=0;
 for(i=0;i<n;i++)
	{sum[i]=0;
	 if(stu[i].average>80&&stu[i].paper>=1)sum[i]+=8000;
	 if(stu[i].average>85&&stu[i].classeva>80)sum[i]+=4000;
	 if(stu[i].average>90)sum[i]+=2000;
	 if(stu[i].average>85&&stu[i].western=='Y')sum[i]+=1000;
	 if(stu[i].classeva>80&&stu[i].leader=='Y')sum[i]+=850;
	 total+=sum[i];
	 if(sum[i]>max)max=sum[i];
	}
 for(i=0;i<n;i++)
	 if(sum[i]==max)break;
 printf("%s\n%d\n%ld",stu[i].name,max,total);
}