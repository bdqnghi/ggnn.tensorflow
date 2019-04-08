void main()
{
	struct information
	{
		char name[20];
		int qimo;
		int banji;
		char ganbu;
		char xibu;
		int lunwen;
		int money;
	}info[100];
	int n,max,sum=0,i;
	char scholar[20];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s %d %d %c %c %d",info[i].name,&info[i].qimo,&info[i].banji,&info[i].ganbu,&info[i].xibu,&info[i].lunwen);
		info[i].money=0;
	}
	for(i=0;i<n;i++)
	{
		if(info[i].qimo>80&&info[i].lunwen>0)
			info[i].money+=8000;
		if(info[i].qimo>85&&info[i].banji>80)
			info[i].money+=4000;
		if(info[i].qimo>90)
			info[i].money+=2000;
		if(info[i].qimo>85&&info[i].xibu=='Y')
			info[i].money+=1000;
		if(info[i].banji>80&&info[i].ganbu=='Y')
			info[i].money+=850;
		sum+=info[i].money;
	}
	strcpy(scholar,info[0].name);
	max=info[0].money;
	for(i=0;i<n;i++)
	{
		if(max<info[i].money)
		{
			max=info[i].money;
			strcpy(scholar,info[i].name);
		}
	}
	printf("%s\n%d\n%d\n",scholar,max,sum);
}
