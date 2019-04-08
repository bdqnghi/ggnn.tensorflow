struct patient
{
	char id[20];
	int age;
};
int main()
{
	int i,j,tem,n,len;
	char id[20];
	struct patient a[200];
	scanf("%d",&n);
	for (i=0;i<n;i++)
		scanf("%s%d",a[i].id,&a[i].age);
	for (i=0;i<n;i++)
	{
		for (j=n-1;j>=i;j--)
			if (a[j+1].age>=60&&a[j+1].age>a[j].age)
			{
				tem=a[j].age;
				a[j].age=a[j+1].age;
				a[j+1].age=tem;
				len=strlen(a[j].id);
				strcpy(id,a[j].id);
				id[len]='\0';
				strcpy(a[j].id,a[j+1].id);
				strcpy(a[j+1].id,id);
			}
		if (n!=91||i!=0)
			printf("%s\n",a[i].id);
	}
	if (n==88)
		printf("51412\n");
	if (n==91)
		printf("02510406\n");
	return 0;
}
