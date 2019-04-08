int main()
{
	int n,i,pass;
	struct patient
	{
		char id[L];
		int age;
	}men[M],temp;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%s%d",men[i].id,&men[i].age);
	for(pass=1;pass<n;pass++)
	{
		for(i=n-1;i>pass-1;i--)
		{
			if(men[i].age>=60&&men[i].age>men[i-1].age)
			{
				temp=men[i];
				men[i]=men[i-1];
				men[i-1]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%s\n",men[i].id);
	}
	return 0;
}
