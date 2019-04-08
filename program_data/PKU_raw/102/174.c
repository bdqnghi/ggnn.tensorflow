
void main()
{
	int n;
	int i,j;
	float tmp;
	float a[40]={0};
	float b[40]={0};
	int t=0;
	int s=0;
	struct 
	{
		char sex[5];
		float high;
	}stu[40];



	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf("%s",&stu[i].sex);
		scanf("%f",&stu[i].high);
	}
	
	for (i=0;i<n;i++)
	{
		if (strcmp(stu[i].sex,"male")==0)
		{
			a[t]=stu[i].high;
			t=t+1;
		}
		else
		{
			b[s]=stu[i].high;
			s=s+1;
		}
	}

	for (i=0;i<t-1;i++)
	{
		for (j=i+1;j<t;j++)
		{
			if (a[i]>a[j])
			{
				tmp=a[i];
				a[i]=a[j];
				a[j]=tmp;
			}
		}
	}

	for (i=0;i<s-1;i++)
	{
		for (j=i+1;j<s;j++)
		{
			if (b[i]<b[j])
			{
				tmp=b[i];
				b[i]=b[j];
				b[j]=tmp;
			}
		}
	}

	for (i=0;i<t;i++)
		stu[i].high=a[i];
	for (i=t;i<s+t;i++)
		stu[i].high=b[i-t];
	printf("%.2f",stu[0].high);
	for (i=1;i<s+t;i++)
		printf("% .2f",stu[i].high);
}