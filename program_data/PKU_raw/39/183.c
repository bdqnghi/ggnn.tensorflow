struct inform
{
	char name[20];
	int test1;
	int test2;
	char c;                                                                           
	char w;
	int a;
}stu[100],temp1;
void main()
{
	int n,i,j,temp2;
    int sum[100]={0},sum1=0;
	scanf("%d",&n);
	for(i=0;i<=n-1;i++)
	{    
		scanf("%s %d %d %c %c %d",stu[i].name,&stu[i].test1,&stu[i].test2,&stu[i].c,&stu[i].w,&stu[i].a);
	}
	for(i=0;i<=n-1;i++)
	{
		if(stu[i].test1>80 && stu[i].a>=1) sum[i]=8000;
	    if(stu[i].test1>85 && stu[i].test2>80) sum[i]=sum[i]+4000;
		if(stu[i].test1>90) sum[i]=sum[i]+2000;
		if(stu[i].test1>85 && stu[i].w=='Y') sum[i]=sum[i]+1000;
		if(stu[i].test2>80 && stu[i].c=='Y')sum[i]=sum[i]+850;
	}
	for(i=0;i<=n-1;i++)
	{
         for(j=0;j<=n-2-i;j++)
		 {
			 if(sum[j]<sum[j+1])
			 {
				 temp2=sum[j];
				 sum[j]=sum[j+1];
				 sum[j+1]=temp2;
				 temp1=stu[j];
				 stu[j]=stu[j+1];
				 stu[j+1]=temp1;
			 }
		 }
	}
	for(i=0;i<=n-1;i++)
	{
		sum1=sum1+sum[i];
	}
	printf("%s\n",stu[0].name);
	printf("%d\n",sum[0]);
	printf("%d\n",sum1);
}
