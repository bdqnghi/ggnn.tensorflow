struct peo
{
	char id[10];
	int age;
}a[150],b[150];
void main()
{
	int n,i,j=0,e,k;
	char c[10];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s%d",a[i].id,&a[i].age);
	}
	for(i=0;i<n;i++)
	{
		if(a[i].age>=60)
		{
			strcpy(b[j].id,a[i].id);
			b[j].age=a[i].age;
			j++;
		}
	}
	for(k=1;k<j;k++)
	{
		for(i=0;i<j-k;i++)
		{
			if(b[i].age<b[i+1].age)
			{
				e=b[i+1].age;
				b[i+1].age=b[i].age;
				b[i].age=e;
				strcpy(c,b[i+1].id);
				strcpy(b[i+1].id,b[i].id);
				strcpy(b[i].id,c);
			}
		}
	}
		for(i=0;i<j;i++)
		{
			printf("%s\n",b[i].id);
		}
		for(i=0;i<n;i++)
		{
			if(a[i].age<60)
			printf("%s\n",a[i].id);
		}
}