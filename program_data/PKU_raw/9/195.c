void main()
{
	struct patient
	{
		char id[10];
		int age;
	}pa[100]={0},old[100]={0},young[100]={0},t;
	int i,j,k=0,l=0,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s %d",pa[i].id,&pa[i].age);
	}
	for(i=0;i<n;i++)
	{
		if(pa[i].age>=60)
		{
			old[k]=pa[i];
			k++;
		}
		else
		{
			young[l]=pa[i];
				l++;
		}
	}
	for(i=0;i<n-1;i++)
	{for(j=0;j<n-1-i;j++)
		{
			if(old[j].age<old[j+1].age)
			{
				t=old[j];
				old[j]=old[j+1];
				old[j+1]=t;
			}
		}
	}
	for(i=0;i<k;i++)
	{
		printf("%s\n",old[i].id);
	}
	for(i=0;i<l;i++)
	{
		printf("%s\n",young[i].id);
	}
}