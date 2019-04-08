void main()
{
	struct stu
	{
		char name[20];
		int end;
		int cls;
		char lead;
		char west;
		int pap;
		int sum;
	}std[100];
	int n,i,j,summ=0,k=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s%d %d %c %c %d",&std[i].name,&std[i].end,&std[i].cls,&std[i].lead,&std[i].west,&std[i].pap);
		std[i].sum=0;
		if((std[i].end>80)&&(std[i].pap>=1))SS=SS+8000;
		if((S.end>85)&&(S.cls>80))SS=SS+4000;
		if(S.end>90)SS=SS+2000;
		if((S.end>85)&&(S.west=='Y'))SS=SS+1000;
		if((S.cls>80)&&(S.lead=='Y'))SS=SS+850;
		summ=summ+SS;
	}
	for(i=0;i<n;i++)
	{
		if(SS>k)
		{
			k=SS;
			j=i;
		}
	}
	printf("%s\n%d\n%d\n",std[j].name,std[j].sum,summ);
}