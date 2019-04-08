
void main()
{
	int n,i,j,index_male=0,index_female=0;
	char sex[10];
	float *male,*female,temp;
	scanf("%d",&n);
	male=(float*)malloc(sizeof(float)*n);
	female=(float*)malloc(sizeof(float)*n);
	for(i=0;i<n;i++)
	{
		male[i]=0;
		female[i]=0;
	}

	for(i=0;i<n;i++)
	{
		scanf("%s",sex);
		if(strcmp(sex,"male")==0)
		{
			scanf("%f",&temp);
			male[index_male]=temp;
			index_male++;
		}
		else
		{
			scanf("%f",&temp);
			female[index_female]=temp;
			index_female++;
		}
	}
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(male[j]>male[j+1])
			{
				temp=male[j];
				male[j]=male[j+1];
				male[j+1]=temp;
			}
			if(female[j]<female[j+1])
			{
				temp=female[j];
				female[j]=female[j+1];
				female[j+1]=temp;
			}
		}
	}

	for(i=0;i<n;i++)
	{
		if(male[i]!=0)
			printf("%3.2f",male[i]);
		if(male[i]!=0&&i+1<n&&male[i+1]!=0)
			printf(" ");
	}
         printf(" ");
	for(i=0;i<n;i++)
	{
		if(female[i]!=0)
			printf("%3.2f",female[i]);
		if(female[i]!=0&&i+1<n&&female[i+1]!=0)
			printf(" ");
	}

}