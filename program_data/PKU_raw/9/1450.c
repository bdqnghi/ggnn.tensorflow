int main()
{
	int n,a,i,j,sgh,sgh60;
	sgh=0;
	sgh60=0;
	char d[10];
	struct guahao
	{
		char ID[10];
		int age;
	}
	gh[100],gh60[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s %d",d,&a);
		if(a>=60)
		{
			strcpy(gh60[sgh60].ID,d);
			gh60[sgh60].age=a;
			sgh60=sgh60+1;
		}else
		{
			strcpy(gh[sgh].ID,d);
			gh[sgh].age=a;
			sgh=sgh+1;
		}
	}
	for(i=1;i<=sgh60;i++)
	{
		for(j=sgh60-1;j>0;j--)
		{
			if(gh60[j].age>gh60[j-1].age)
			{
				a=gh60[j].age;
				gh60[j].age=gh60[j-1].age;
				gh60[j-1].age=a;
				strcpy(d,gh60[j].ID);
				strcpy(gh60[j].ID,gh60[j-1].ID);
				strcpy(gh60[j-1].ID,d);
			}
		}
	}
	for(i=0;i<sgh60;i++)
	{
		printf("%s\n",gh60[i].ID);
	}
	for(i=0;i<sgh;i++)
	{
		printf("%s\n",gh[i].ID);
	}
	return 0;
}