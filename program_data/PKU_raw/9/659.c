main()
{
	int i,n,a[100],j;
	struct patient
	{
		char id[10];
		int age;
	}
	s[100];
	
	scanf("%d",&n);
    for (i=0;i<n;i++)
	{
		scanf("%s%d",s[i].id,&s[i].age);
    }
	while (1)
	{
		int max=0;
		for (i=0;i<n;i++)
	{
		if (s[i].age>s[max].age)
			max=i;
    }
	if (s[max].age>=60)
	{
		printf("%s\n",s[max].id);
        s[max].age=0;
	}
	else break;
	}
	for (i=0;i<n;i++)
	if (s[i].age>0)
		printf("%s\n",s[i].id);
	
}
