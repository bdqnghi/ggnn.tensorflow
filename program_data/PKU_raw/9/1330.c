struct patient
{
	char ID[11];    //?????
	int age;
}pa[100];           //?????
int main(int argc, char* argv[])
{
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s %d",pa[i].ID,&pa[i].age);
	}             //??100?????
	struct patient old[100];//????????????60??
	int count=0;
	for(i=0;i<n;i++)
	{
		if(pa[i].age>=60)
		{
			strcpy(old[count].ID,pa[i].ID);
			old[count].age=pa[i].age;
			count++;
			pa[i].age=0;
		}
	}
	int k,j,e;
	char ex[11];
	for(k=1;k<count;k++)
	{
		for(j=0;j<count-k;j++)
		{
			if(old[j].age<old[j+1].age)
			{
				e=old[j+1].age;
				old[j+1].age=old[j].age;
				old[j].age=e;
				strcpy(ex,old[j].ID);
				strcpy(old[j].ID,old[j+1].ID);
				strcpy(old[j+1].ID,ex);
			}
		}
	}
	for(i=0;i<count;i++)
	{
		printf("%s\n",old[i].ID);
	}
	for(i=0;i<n;i++)
	{
		if(pa[i].age!=0)
		{
			printf("%s\n",pa[i].ID);
		}
	}
	return 0;
}