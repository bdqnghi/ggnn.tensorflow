struct patient
{	char ID[10];
	int age;
	int a6;
	char Id[10];
};

void main()
{	struct patient bin[N];
	int n,mid;
	char s[10];
	int i=0,j=0,k=0;
	char c[10];
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%s%d",&bin[i].ID,&bin[i].age);
	

	for(i=0;i<n;i++)
	{	if(bin[i].age>=60)
		{	bin[j].a6=bin[i].age;
			strcpy(bin[j].Id,bin[i].ID);
			j++;
			bin[i].age=0;
			
			
		}
	}
	for(k=1;k<j;k++)
	{	for(i=0;i<j-k;i++)
		if(bin[i].a6<bin[i+1].a6)
		{	mid=bin[i].a6;
			bin[i].a6=bin[i+1].a6;
			bin[i+1].a6=mid;
			
			
			strcpy(c,bin[i].Id);
			strcpy(s,bin[i+1].Id);
			strcpy(bin[i+1].Id,c);
			strcpy(bin[i].Id,s);
		}
	}
	for(i=0;i<j;i++)
		printf("%s\n",bin[i].Id);
		
	for(i=0;i<n;i++)
	{	if(bin[i].age!=0)
			printf("%s\n",bin[i].ID);
	}

}
