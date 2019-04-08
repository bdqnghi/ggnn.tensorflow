struct old
{
	char ID[10];
	int age;
};
void main()
{
	struct old a[100],b[100],c[100];
	int n,i,j,B=0,C=0,temp;
	char TEMP[10];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s %d",&a[i].ID,&a[i].age);
		if(a[i].age>=60)
		{
			strcpy(b[B].ID,a[i].ID);
			b[B].age=a[i].age;
			B++;
		}
		else
		{
			strcpy(c[C].ID,a[i].ID);
			c[C].age=a[i].age;
			C++;
		}
	}
	for(i=B-1;i>=0;i--)
	{
		for(j=0;j<i;j++)
		{
			if(b[j].age<b[j+1].age||(b[j].age==b[j+1].age&&((b[j].ID-'\0')>(b[j+1].ID-'\0'))))
			{
				temp=b[j+1].age,b[j+1].age=b[j].age,b[j].age=temp;
				strcpy(TEMP,b[j+1].ID),strcpy(b[j+1].ID,b[j].ID),strcpy(b[j].ID,TEMP);
			}
		}
	}
	for(i=C-1;i>=0;i--)
	{
		for(j=0;j<i;j++)
		{
			if((c[j].ID-'\0')>(c[j+1].ID-'\0'))
			{
				temp=c[j+1].age,c[j+1].age=c[j].age,c[j].age=temp;
				strcpy(TEMP,c[j+1].ID),strcpy(c[j+1].ID,c[j].ID),strcpy(c[j].ID,TEMP);
			}
		}
	}
	for(i=0;i<B;i++)
		printf("%s\n",b[i].ID);
	for(i=0;i<C;i++)
		printf("%s\n",c[i].ID);
}
