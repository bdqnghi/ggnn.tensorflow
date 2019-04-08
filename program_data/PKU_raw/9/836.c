int main()
{
	struct patient
	{
		int id[7];
		int age;
	}patient[100];
	int i,n,max=0,k;
	scanf("%d\n",&n);
	for(i=0;i<n;i++)scanf("%s %d\n",patient[i].id,&patient[i].age);
	for(i=0;i<n;i++)
	{
		if(patient[i].age>max)max=patient[i].age;
	}
	for(k=max;k>59;k--)
	{
		for(i=0;i<n;i++)if(patient[i].age==k)printf("%s\n",patient[i].id);
	}
	for(i=0;i<n;i++)
	{
		if(patient[i].age<60)printf("%s\n",patient[i].id);
	}
} 