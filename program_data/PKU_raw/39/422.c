int main()
{
	int n;
	scanf("%d",&n);
	scanf("\n");
	struct student
	{
		char *name;
		int final;
		int clas;
		char gan;
		char west;
		int essay;
	}a[100];
	int i;
	for(i=0;i<n;i++)
	{
		a[i].name=(char *)malloc(20*sizeof(char));
		scanf("%s%d%d %c %c%d",a[i].name,&a[i].final,&a[i].clas,&a[i].gan,&a[i].west,&a[i].essay);
		
		if(i<n-1)
			scanf("\n");
	}
	int scholar[100];
	for(i=0;i<n;i++)
		scholar[i]=0;
	for(i=0;i<n;i++)
	{
		while(a[i].final>80&&a[i].essay>=1)
		{
			scholar[i]=scholar[i]+8000;
		    break;
		}
			while(a[i].final>85&&a[i].clas>80)
		{
			scholar[i]=scholar[i]+4000;
			break;
		}
		while(a[i].final>90)
		{
			scholar[i]=scholar[i]+2000;
			break;
		}
		while(a[i].final>85&&a[i].west=='Y')
		{
			scholar[i]=scholar[i]+1000;
			break;
		}
		while(a[i].clas>80&&a[i].gan=='Y')
		{
			scholar[i]=scholar[i]+850;
			break;
		}
	}
	int k;
	for(i=1,k=0;i<n;i++)
	{
		if(scholar[i]>scholar[k])
			k=i;
	}
	int s;
	for(i=0,s=0;i<n;i++)
	{
		s=s+scholar[i];
	}
	printf("%s\n%d\n%d",a[k].name,scholar[k],s);
}

