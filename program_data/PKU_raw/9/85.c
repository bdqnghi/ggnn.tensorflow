void main()
{
	struct p
	{
		int k;
		char id[10];
		int age;
	}pa[100]={0,"",0},pb[100]={0,"",0},temp;


	int n;
	int i,j,k,age,na,nb;
	char id[10]={""};

	scanf("%d",&n);

	for(i=0,j=0;i+j<n;)
	{
		scanf("%s%d",&id,&age);
		if(age>=60)
		{
			pa[i].age=age;
			strcpy(pa[i].id,id);
			pa[i].k=i;
			i++;
		}
		else
		{
			pb[j].age=age;
			strcpy(pb[j].id,id);
			pb[j].k=j;
            j++;
		}
	}
	na=i;nb=j;




	for(j=1;j<=n-1;j++)
	{
		for(i=0;i<n-j;i++)
		{
			if(pa[i].age < pa[i+1].age)
			{
				temp.age=pa[i+1].age;strcpy(temp.id,pa[i+1].id);
				pa[i+1].age=pa[i].age;strcpy(pa[i+1].id,pa[i].id);
				pa[i].age=temp.age;strcpy(pa[i].id,temp.id);

			}

		}
	}

	printf("%s",pa[0].id);
	for(i=1;i<=na;i++)
	{
		printf("\n%s",pa[i].id);
	}
	for(j=0;j<=nb;j++)
	{
		puts(pb[j].id);
	}

}