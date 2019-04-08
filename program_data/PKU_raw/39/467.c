int main()
{
	struct student
	{
		char name[20];
		int qimo;
		int banji;
		char ganbu;
		char xibu;
		int lunwen;
	};
	int i,n,count[100]={0};
	scanf("%d",&n);

	struct student *pp;
	pp=(struct student *)malloc(sizeof(student)*n);
	for(i=0;i<n;i++)
	{
		scanf("%s %d %d %c %c %d",(pp+i)->name,&((pp+i)->qimo),&((pp+i)->banji),&((pp+i)->ganbu),&((pp+i)->xibu),&((pp+i)->lunwen));	
	}
	for(i=0;i<n;i++)
	{
		if((pp[i].qimo>80)&&(pp[i].lunwen>=1))count[i]+=8000;
		if((pp[i].qimo>85)&&(pp[i].banji>80))count[i]+=4000;
		if(pp[i].qimo>90)count[i]+=2000;
		if((pp[i].qimo>85)&&(pp[i].xibu=='Y'))count[i]+=1000;
		if((pp[i].banji>80)&&(pp[i].ganbu=='Y'))count[i]+=850;
	}
	int max=count[0];
	int p=0;
	int sum=0;
	for(i=0;i<n;i++)
	{
		sum+=count[i];
		if(max<count[i])
		{
			max=count[i];
			p=i;
		}
	}
	printf("%s\n%d\n%d\n",(pp+p)->name,max,sum);
	return 0;
}
