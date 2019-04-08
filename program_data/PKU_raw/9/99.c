
struct patient{
	char ID[10];
	int age;
};


void bubble(struct patient * a[],int n);

void main()
{
	int n,i,s=0;
	struct patient p[100]={"0",0};
	struct patient * pt[100];
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		scanf("%s %d",&p[i].ID,&p[i].age);
		pt[i]=&p[i];
	}

	bubble(pt,n);

	for(i=0;i<n;i++)
	{
		if(pt[i]->age>=60)
		{
			printf("%s\n",pt[i]->ID);
			s++;
		}
	}


	for(i=0;i<n;i++)
	{
		
		if(p[i].age<60)
		{
			printf("%s\n",p[i].ID);
		
		}
	
	}

}

void sort2(struct patient * a[],int n)
{
	int i,j,k;
	struct patient * t;
	for(i=0;i<n-1;i++)
	{
		k=i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]->age > a[k]->age)
			{k=j;}
		}
		t=a[k];a[k]=a[i];a[i]=t;
	}
}
void bubble(struct patient * a[],int n)
{
	int i,j;
	struct patient * t;
	for(i=0;i<=n-2;i++)
	{
		for(j=0;j<=n-i-2;j++)
		{
			if(a[j]->age < a[j+1]->age)
			{
				t=a[j];a[j]=a[j+1];a[j+1]=t;
			}
		}
	}
}