int main()
{
	struct patient
	{
		char id[10];
		int age;
	} a[100],m,k;
	int i,j,n,num=0;
	scanf("%d",&n);
	for (i=0;i<n;i++)
		scanf("%s %d",a[i].id,&a[i].age);
	for (i=0;i<n;i++)
	{
		if(a[i].age>=60)
		{
			num++;
			m=a[i];
			for (j=i;j>0;j--)
				a[j]=a[j-1];
			a[0]=m;
		}
	}
	for (i=0;i<num;i++)
	{
		for (j=i+1;j<num;j++)
		{
			if (a[i].age<=a[j].age)
			{
				k=a[i];
				a[i]=a[j];
				a[j]=k;
			}
		}
	}
	for (i=0;i<n;i++)
		printf("%s\n",a[i].id);
	return 0;
}