struct patient
{
	char id[10];
	int age;
}p[100],old[100],temp;
void main()
{
	int i,j,n,count=0;
    scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",p[i].id);
		scanf("%d",&p[i].age);
		if(p[i].age>=60)
		{
           old[count]=p[i];
		   count++;
		}
	}
	for(i=0;i<count;i++)
	{
		for(j=0;j<count-i;j++)
		{
			if(old[j+1].age>old[j].age)
			{
				temp=old[j];
				old[j]=old[j+1];
				old[j+1]=temp;
			}
		}
	}
	for(i=0;i<count;i++)
	{
		printf("%s\n",old[i].id);
	}
	for(i=0;i<n;i++)
	{
		if(p[i].age<60)
		{
			printf("%s\n",p[i].id);
		}
	}
}