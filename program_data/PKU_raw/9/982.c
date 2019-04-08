
int main()
{
	struct Patient
	{
		int flag;
		char id[10];
		int age;
	};
	struct Patient p[100],p2[100],temp;
	int n,i,t=0,k,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s %d",&p[i].id,&p[i].age);
		p[i].flag=0;
		if(p[i].age>=60)
		{
			t=t+1;
			p[i].flag=1;
		}
		p2[i]=p[i];
	}
/*
	for(i=0;i<n-1;i++)
	{
		k=i;
		for(j=i+1;j<n;j++)
		{
			if(p[j].age>p[k].age) k=j;
		}
		if(k!=i)
		{
			temp=p[i];
			p[i]=p[k];
			p[k]=temp;
		}
	}
*/
	  for(i=0;i<n-1;i++)
	  {
		  for(j=0;j<n-1-i;j++)
			  if(p[j].age<p[j+1].age)
			  {   
				  temp=p[j];
				  p[j]=p[j+1];
				  p[j+1]=temp;
			  }
	  }
	for(i=0;i<t;i++)
	{
		printf("%s\n",p[i].id);
	}
	for(i=0;i<n;i++)
	{
		if(p2[i].flag==0) printf("%s\n",p2[i].id);
	}
	return 0;
}

/*
int main()
{
	struct patient
	{
		char ID[10];
		int age;
	}patient1[100];
	struct patient patient2[100];
	struct patient temp;
	int n,i,s=0,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s %d",&patient1[i].ID,&patient1[i].age);
	}
	for(i=0;i<n;i++)
	{
		if(patient1[i].age>=60)
		{
			patient2[s]=patient1[i];
			s++;
		}
	}
    for(j=0;j<s-1;j++)
	{
		for(i=0;i<s-1-j;i++)
		{
			if(patient2[i].age<patient2[i+1].age)
			{
				temp=patient2[i];
				patient2[i]=patient2[i+1];
				patient2[i+1]=temp;
			}
		}
	}
	for(i=0;i<s;i++)
	{
		printf("%s\n",patient2[i].ID);
	}
	for(i=0;i<n;i++)
	{
		if(patient1[i].age<60)
		{
			printf("%s\n",patient1[i].ID);
		}
	}
	return 0;
}
*/