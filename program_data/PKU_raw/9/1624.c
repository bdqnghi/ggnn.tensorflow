
int main()
{
	int n;
	struct ren
	{
		char id[10];
		int age;
	} p[100];
	struct ren t;
	int i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s %d",p[i].id,&p[i].age);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(p[j].age<p[j+1].age && p[j+1].age>=60)
			{
				t=p[j];
				p[j]=p[j+1];
				p[j+1]=t;
			}
		}
	}
	for(i=0;i<n;i++)
	printf("%s\n",p[i].id);
	
	return 0;
} 
