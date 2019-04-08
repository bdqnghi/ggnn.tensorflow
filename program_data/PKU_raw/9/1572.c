struct patient
{
	char a[100];
	int age;
}pat[110],pat1[110];

void bubble(int n)
{
	int i,j;
	struct patient temp;
	for(i=1;i<n;i++)
	{
		for(j=0;j<n-i;j++)
		{
			if(pat1[j].age<pat1[j+1].age)
			{
				temp=pat1[j];
				pat1[j]=pat1[j+1];
				pat1[j+1]=temp;
			}
		}
	}
}

void main()
{
	int n,i,k=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s %d",pat[i].a,&pat[i].age);
		if(pat[i].age>=60)
			pat1[k++]=pat[i];
	}
	bubble(k);
	for(i=0;i<k;i++)
		printf("%s\n",pat1[i].a);
	for(i=0;i<n;i++)
	{
		if(pat[i].age<60)
			printf("%s\n",pat[i].a);
	}
}
			




