
struct Patient
{
	char id[10];
	int age;
}a[100],e,b[100];

int main()
{
	int n,J;
	scanf("%d",&n);
	int i,j;
	for(i=0;i<n;i++)
	{
		scanf("%s %d",a[i].id,&a[i].age);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i;j++)
		{
			if(a[j].id>a[j+1].id)
			{
				e=a[j];a[j]=a[j+1];a[j+1]=e;
			}
		}
	}
	j=0;
	for(i=0;i<n;i++)
	{
		if(a[i].age>=60)
		{
			b[j]=a[i];
			j++;
		}
	}
	J=j;
	for(j=0;j<J;j++)
	{
		for(i=0;i<J-j;i++)
		{
			if(b[i].age<b[i+1].age)
			{
				e=b[i];
				b[i]=b[i+1];
				b[i+1]=e;
			}
		}
	}
	for(j=0;j<J;j++)
	{
		printf("%s\n",b[j].id);
	}
	for(i=0;i<n;i++)
	{
		if(a[i].age<60)
		{
			printf("%s\n",a[i].id);		
		}
	}
	return 0;	
}