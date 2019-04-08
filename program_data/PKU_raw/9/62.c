
struct bingren{
	char id[20];
	int age;
}bing[100]={'\0', 0};

struct laoren{
	char oid[20];
	int oage;
}lao[100]={'\0', 0};

void main()
{
	int n, i, j=0, l;
	struct laoren temp;
	scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		scanf("%s", bing[i].id);
		scanf("%d", &bing[i].age);
	}
	for(i=0;i<n;i++)
	{
		if(bing[i].age>=60)
		{
			strcpy(lao[j].oid,bing[i].id);
			lao[j].oage=bing[i].age;
			bing[i].age=-1;
			j++;
		}
		else
			continue;
	}
	for(l=0;l<j;l++)
	{
		for(i=0;i<j-l;i++)
		{
			if(lao[i].oage<lao[i+1].oage)
			{
				temp=lao[i];
				lao[i]=lao[i+1];
				lao[i+1]=temp;
			}
		}
	}
	for(i=0;i<j+1;i++)
	{
		printf("%s\n", lao[i].oid);
	}
	for(i=0;i<n;i++)
	{
		if(bing[i].age>=0)
		{
			printf("%s\n", bing[i].id);
		}
		else
			continue;
	}
}
