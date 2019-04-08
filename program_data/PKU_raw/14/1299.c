
struct student
{
	char id[10];
	int ch;
	int ma;
};

int main(int argc, char* argv[])
{
	int n,i,max,sec,min,total[100000];
	scanf("%d",&n);
	struct student stu[100000];
	for(i=0;i<n;i++)
	{
		scanf("%s%d%d",stu[i].id, &stu[i].ch, &stu[i].ma);
		total[i]=stu[i].ch + stu[i].ma;
	}

	max = 0;

	for(i=0;i<n;i++)
	{
		if(total[i]>total[max])
			max = i;
	}

    printf("%s %d\n",stu[max].id, total[max]);

	for(i=0;i<n;i++)
	{
		if(total[i]==total[max])
		{
			total[i]=0;
			break;
		}
	}	

	sec = 0;
	for(i=0;i<n;i++)
	{
		if(total[i]>total[sec])
			sec=i;
	}

	printf("%s %d\n", stu[sec].id, total[sec]);

	for(i=0;i<n;i++)
	{
		if(total[i]==total[sec])
		{
			total[i]=0;
			break;
		}
	}	
	

	min = 0;
	for(i=0;i<n;i++)
	{
		if(total[i]>total[min])
			min=i;
	}

	printf("%s %d\n", stu[min].id, total[min]);
	return 0;
}

