struct bing
{
	char id[10];
	int age;
}person[100],old[100];

main()
{
	int n,i,j=0,k,b;
	char e[10];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s%d",person[i].id,&person[i].age);
		if(person[i].age>=60)
		{
			strcpy(old[j].id,person[i].id);
			old[j].age=person[i].age;
			j=j+1;
		}
	}
	for(k=1;k<j;k++)
		for(i=0;i<j-k;i++)
		{
			if(old[i].age<old[i+1].age)
			{
				strcpy(e,old[i].id);
				strcpy(old[i].id,old[i+1].id);
				strcpy(old[i+1].id,e);
				b=old[i].age;
				old[i].age=old[i+1].age;
				old[i+1].age=b;
			}
		}
	for(i=0;i<j;i++)
		printf("%s\n",old[i].id);
	for(i=0;i<n;i++)
		if(person[i].age<60)
			printf("%s\n",person[i].id);
	return 0;
}

