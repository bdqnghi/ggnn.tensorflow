void main ()
{
	struct stu
	{
		char name[20];
		int final;
		int  argue;
		char leader;
		char west;
		int art;
	}stu[100];
	struct stu term;
	int n,i,sum[100]={0},t=0,m,j;
	scanf("%d",&n);
	for(i=0;i<=n-1;i++)
		scanf("%s %d %d %c %c %d",&stu[i].name,&stu[i].final,&stu[i].argue,&stu[i].leader,&stu[i].west,&stu[i].art);
    for(i=0;i<=n-1;i++)
	{
		if(stu[i].final>80&&stu[i].art>=1)
			sum[i]=sum[i]+8000;
		if(stu[i].final>85&&stu[i].argue>80)
			sum[i]=sum[i]+4000;
		if(stu[i].final>90)
			sum[i]=sum[i]+2000;
		if(stu[i].final>85&&stu[i].west=='Y')
			sum[i]=sum[i]+1000;
		if(stu[i].argue>80&&stu[i].leader=='Y')
			sum[i]=sum[i]+850;
	}
	for (i=0;i<n-1;i++)
		for (j=0;j<n-1-i;j++)
			if(sum[j]<sum[j+1])
			{
				term=stu[j];
				stu[j]=stu[j+1];
				stu[j+1]=term;
				m=sum[j];
				sum[j]=sum[j+1];
				sum[j+1]=m;
				
			}
			for(i=0;i<=n-1;i++)
				t=t+sum[i];
			printf ("%s\n",stu[0].name);
			printf("%d\n",sum[0]);
			printf("%d\n",t);
}

				
