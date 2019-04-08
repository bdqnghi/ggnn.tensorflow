void main()
{
	int i,j=0,s,t,k=0,n;
	struct patient{
		char ID[10];
		int age;
	};
	struct patient p[100],d[100],c[100],temp;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s %d",p[i].ID,&p[i].age);
	}
	for(i=0;i<n;i++)
	{
		if(p[i].age>=60)
			d[j++]=p[i];
		else c[k++]=p[i];
	}
	s=j;
	t=k;
	for(i=1;i<s;i++)
	{
		for(j=0;j<s-i;j++)
		{
			if(d[j].age<d[j+1].age)
			{
				temp=d[j];
				d[j]=d[j+1];
				d[j+1]=temp;
			}
		}
	}
	for(i=0;i<s;i++)
	{
		printf("%s\n",d[i].ID);
	}
	for(i=0;i<t;i++)
		printf("%s\n",c[i].ID);
}
