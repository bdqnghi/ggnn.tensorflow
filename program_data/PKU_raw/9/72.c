void main()
{
	int n;
	int i;
	int j;
	struct client
	{
		char num[11];
		int age;
	};
	struct client line[100];
	struct client temp;

	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%s%d",&line[i].num,&line[i].age);

	for(i=0;i<n-1;i++)
		for(j=0;j<n-1;j++)
		{
			if(line[j].age>=60&&line[j+1].age>=60)
			{
				if(line[j].age<line[j+1].age)
				{
					temp=line[j];
					line[j]=line[j+1];
					line[j+1]=temp;
				}
			}
			if(line[j].age<60 && line[j+1].age>=60)
				{
					temp=line[j];
					line[j]=line[j+1];
					line[j+1]=temp;
				}
		}
	for(i=0;i<n;i++)
		printf("%s\n",line[i].num);

}