struct patient
{
	char id[20];
	int age;
	int num;
};
int main()
{
	int n,i,j;
	char id1[20];
	int age1,u;
	struct patient temp;
	struct patient *p;
	struct patient a[500];
	scanf("%d",&n);
	p=a;
	u=0;
	for(;p<a+n;p++)
	{
		scanf("%s",id1);
		scanf("%d",&age1);
		strcpy(p->id,id1);
		p->age=age1;
		p->num=u;
		u++;
	}
	p=a;
	for(i=n-2;i>=0;i--)
	{
		for(j=0;j<=i;j++)
		{
			if((*(p+j)).age>=60||(*(p+j+1)).age>=60)
			{
		    	if((*(p+j)).age<(*(p+j+1)).age)
				{
			    	temp=*(p+j);
			    	*(p+j)=*(p+j+1);
				    *(p+j+1)=temp;
				}
			}
			else continue;
		}

	}
	p=a;
	for(;p<a+n;p++)
	{
	
			printf("%s\n",p->id);
	}

	return 0;
}