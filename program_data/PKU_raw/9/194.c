void main()
{
	int i,j=0,k=0,n,n1=-1,n2=-1,old=0;
	char xiao[100][10];
	struct bingren
	{
		char id[10];
		int age;
	};
	struct bingren a[100];
	struct bingren b[100];
	struct bingren t;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%s%d",a[i].id,&a[i].age);
	for(i=0;i<n;i++)
	{
		if(a[i].age>=60)
		{
           b[j]=a[i];
		   
		   n1++;
		   
		   j++;
		}
		else 
		{
			strcpy(xiao[k],a[i].id);
			k++;
			n2++;
		}
	}
	for(i=0;i<n1;i++)
	{
		for(j=0;j<n1-i;j++)
		{
           if(b[j].age<b[j+1].age)
		   {
			   t=b[j];
			   b[j]=b[j+1];
			   b[j+1]=t;
		   }
		}

	}

    for(i=0;i<=n1;i++)
		printf("%s\n",b[i].id);
	for(i=0;i<=n2;i++)
		printf("%s\n",xiao[i]);
}


