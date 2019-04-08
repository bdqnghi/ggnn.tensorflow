struct pati
{
	char ID[10];
	int age;
}p[100];
void main()
{
	int i,j,n,p2[100]={0},p3[100]={0},t=0,r=0,tem;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s %d",p[i].ID,&p[i].age);
		if(p[i].age>=60)
		{
			p2[t]=p[i].age;
			t++;
		}
	}
	for(i=0;i<t-1;i++)
		for(j=0;j<t-1-i;j++)
		{
			if(p2[j]<p2[j+1])
			{
				tem=p2[j+1];
				p2[j+1]=p2[j];
				p2[j]=tem;
			}
		}
	for(i=0;i<t;i++)
	{
		if(i>0)
		{
			if(p2[i]!=p2[i-1])
			{
				p3[r]=p2[i];
				r++;
			}
		}
		else
		{
			p3[r]=p2[i];
			r++;
		}
	}
	t=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(p[j].age==p3[t])
			{
				printf("%s\n",p[j].ID);
			}
		}
	t++;
	}
	for(i=0;i<n;i++)
		if(p[i].age<60)
			printf("%s\n",p[i].ID);
}