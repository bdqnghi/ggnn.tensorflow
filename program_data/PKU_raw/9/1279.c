int main()
{
	int n,i,j,temp,m=0;
	int patage[100];
	struct patient
	{
		char num[20];
		int age;
	};
	struct patient pat[100];
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
		scanf("%s%d",pat[i].num,&pat[i].age);
	for(i=0,j=0;i<n;i++)
		if(pat[i].age>=60)
		{
			patage[j]=pat[i].age;
			j++;
			m++;
		}
	for(i=0;i<m;i++)
		for(j=0;j<m-i;j++)
		{
			if(patage[j]<patage[j+1])
			{
				temp=patage[j];
				patage[j]=patage[j+1];
				patage[j+1]=temp;
			}
		}
	for(i=0;i<m;i++)
		{
		if(patage[i]==patage[i-1])
			continue;
		for(j=0;j<n;j++)
		    if(pat[j].age==patage[i])
				printf("%s\n",pat[j].num);
		}
	for(i=0;i<n;i++)
	{
		if(pat[i].age>=60)
			continue;
		else
			printf("%s\n",pat[i].num);
	}
	return 0;
}