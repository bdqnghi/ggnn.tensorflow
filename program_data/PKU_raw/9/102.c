void main()
{
	struct people
	{
		char num[10];
		int age;
	}peo[100],pai[100],temp;

	int i,n;
	int j=0;
	int k=0;

	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s %d",peo[i].num,&peo[i].age);
	}


	for(i=0;i<n;i++)
	{
		if(peo[i].age>=60)
		{
			pai[j]=peo[i];
			j++;
		}
	}

	for(i=0;i<n;i++)
	{
		if(peo[i].age<60)
		{
			pai[j]=peo[i];
			j++;
		}
	}
	


	for(k=0;k<j-1;k++)
	{
		for(i=0;i<j-1-k;i++)
		{
			if((pai[i].age<pai[i+1].age)&&(pai[i+1].age>=60))
			{
				temp=pai[i];
				pai[i]=pai[i+1];
				pai[i+1]=temp;
			}
		}
	}

	for(i=0;i<n;i++)
		printf("%s\n",pai[i].num);
}


