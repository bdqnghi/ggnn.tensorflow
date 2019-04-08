struct stu
{
	char xingming[21];
	int qimchengji;
	int pingychengji;
	char ganbu[2];
	char xibu[2];
	int lunwenshu;
    int	jiangxuejin;
}stum[101];
void main()
{
	char s[2]={"Y"};
	int n,i,j,jiangjinzongshu;
	  jiangjinzongshu=0;
	  scanf("%d",&n);
	  for(i=0;i<n;i++)
	  {
		  stum[i].jiangxuejin=0;
	  }
	for(i=0;i<n;i++)
	{
		scanf("%s%d%d%s%s%d",stum[i].xingming,&stum[i].qimchengji,
			&stum[i].pingychengji,stum[i].ganbu,stum[i].xibu,&stum[i].lunwenshu);
	}
    for(i=0;i<n;i++)
	{
		if(stum[i].qimchengji>80&&stum[i].lunwenshu>=1)
		{
			stum[i].jiangxuejin+=8000;
		}
		if(stum[i].qimchengji>85&&stum[i].pingychengji>80)
		{	
			stum[i].jiangxuejin+=4000;
		}
		if(stum[i].qimchengji>90)
		{
			stum[i].jiangxuejin+=2000;
		}
		if(stum[i].qimchengji>85&&strcmp(stum[i].xibu,s)==0)
		{
			stum[i].jiangxuejin+=1000;
		}
		if(stum[i].pingychengji>80&&strcmp(stum[i].ganbu,s)==0)
		{
			stum[i].jiangxuejin+=850;
		}
	}
	for(i=0;i<100;i++)
	{
		for(j=0;j<=100-i-1;j++)
		{
			if(stum[j].jiangxuejin<stum[j+1].jiangxuejin)
			{
				stum[100]=stum[j];
				stum[j]=stum[j+1];
				stum[j+1]=stum[100];
			}
		}
	}
	printf("%s\n",stum[0].xingming);
	printf("%d\n",stum[0].jiangxuejin);
	for(i=0;i<n;i++)
	{
		jiangjinzongshu+=stum[i].jiangxuejin;
	}
	printf("%d\n",jiangjinzongshu);
}

