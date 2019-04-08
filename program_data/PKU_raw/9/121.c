struct patient{
		char id[10];
		int age;
	};
void bubble(struct patient p[],int m);
void main()
{
	
	struct patient p[200];
	int n,i,t=100;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s %d",p[i].id,&p[i].age);
		if(p[i].age>=60)
		{
			p[t]=p[i];
			t++;
			p[i].age=0;
		}
	}
	bubble(p,t);
	for(i=100;i<t;i++)
	{
		printf("%s\n",p[i].id);
	}
	for(i=0;i<n;i++)
	{
		if(p[i].age!=0)
			printf("%s\n",p[i].id);
	}
}
void bubble(struct patient p[],int m)
{
	int i,j;
	struct patient temp;
	for(j=101;j<m;j++)
	{
		for(i=100;i<m+100-j;i++)
		{
			if(p[i].age<p[i+1].age)
			{
				temp=p[i];
				p[i]=p[i+1];
		    	p[i+1]=temp;
			}
		}
	}
}





