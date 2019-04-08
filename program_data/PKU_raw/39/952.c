int main()
{
	char name[100][20]={'\0'};
	int qimo[100]={0};
	int ban[100]={0};
	char xue[100]={'\0'};
	char xi[100]={'\0'};
	int lun[100]={0};
	int n;
	int sum[100]={0};
	int max=0;
	char ma[100]={'\0'};
	int i,j,k;
	int zong=0;
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf("%s %d %d %c %c %d",name[i],&qimo[i],&ban[i],&xue[i],&xi[i],&lun[i]);
	}
	for (i=0;i<n;i++)
	{
		if(qimo[i]>80&&lun[i]>=1) sum[i]=sum[i]+8000;
		if (qimo[i]>85&&ban[i]>80) sum[i]=sum[i]+4000;
		if (qimo[i]>90) sum[i]=sum[i]+2000;
		if (qimo[i]>85&&xi[i]=='Y') sum[i]=sum[i]+1000;
		if (ban[i]>80&&xue[i]=='Y') sum[i]=sum[i]+850;
	}
	for (i=0;i<n;i++)
	{
		if (max<sum[i])
			{
			     max=sum[i];
				 strcpy(ma,name[i]);
		}
	    zong=zong+sum[i];
	}
    printf("%s\n%d\n%d",ma,max,zong);
	return 0;
}

