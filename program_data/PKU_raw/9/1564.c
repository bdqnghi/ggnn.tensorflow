struct bing
{
	char id[20];
	int age;
};
int main()
{
	struct bing b[100],sixup[100],sixdown[100];
	struct bing temp;
	int m;
	int n,l;
	int i,j;
	scanf("%d",&m);
	for(i=0;i<=m-1;i++)
	{
		scanf("%s%d",b[i].id,&b[i].age);
	}
	n=0;l=0;
	for(i=0;i<=m-1;i++)
	{
		if(b[i].age>=60)
		{
			sixup[n]=b[i];
			n++;
		}
		else
		{	sixdown[l]=b[i];
			l++;
		}
	}
	for(i=1;i<=n-1;i++)
	{
		temp=sixup[i];
		for(j=i-1;j>=0;j--)
		{
			if(temp.age>sixup[j].age)
			{
				sixup[j+1]=sixup[j];
				sixup[j]=temp;
			}
			else
			{
				break;
			}
		}
	}
	for(i=0;i<=n-1;i++)
	{
		puts(sixup[i].id);
	}
	for(i=0;i<=l-1;i++)
	{
		puts(sixdown[i].id);
	}
	return 0;
}
		
